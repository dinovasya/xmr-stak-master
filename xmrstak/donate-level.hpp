#pragma once

/*
 * Dev donation.
 * Percentage of your hashing power that you want to donate to the developer, can be 0.0 if you don't want to do that.
 * Example of how it works for the default setting of 2.0:
 * You miner will mine into your usual pool for 98 minutes, then switch to the developer's pool for 2.0 minute.
 * Switching is instant, and only happens after a successful connection, so you never loose any hashes.
 *
 * If you plan on changing this setting to 0.0 please consider making a one off donation to our wallets:
 * fireice-uk:
 * 4BrL51JCc9NGQ71kWhnYoDRffsDZy7m1HUU7MRU4nUMXAHNFBEJhkTZV9HdaL4gfuNBxLPc3BeMkLGaPbF5vWtANQtftKaNqUAFAyJJ23o
 * psychocrypt:
 * 4BrL51JCc9NGQ71kWhnYoDRffsDZy7m1HUU7MRU4nUMXAHNFBEJhkTZV9HdaL4gfuNBxLPc3BeMkLGaPbF5vWtANQsS97fDi88bEbRngUF
 *
 */

constexpr double fDevDonationLevel = 0.0 / 100.0;
