/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84307
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 = ((unsigned char) (unsigned char)226);
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 281474976710655ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (((((unsigned long long int) -1)) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)0)), (-670611429842470450LL))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) ((unsigned int) ((7) & (1573391610))));
        var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1812392340U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))) : (8LL))) - (((/* implicit */long long int) (-(2482574955U))))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)226))))) != ((+(15819520617372006118ULL))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_9 [i_3] [7LL] = ((/* implicit */int) (_Bool)1);
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3ULL)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) min((1874564213), (0))))));
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1322749037)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((9113763647926258025LL) < (((/* implicit */long long int) 3562809725U)))))) + ((-(var_10))))) : ((-(492626006U)))));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-670611429842470450LL))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (((-(4150980037U))) - (((/* implicit */unsigned int) ((var_3) / (-66027276))))))) : ((-(max((((/* implicit */unsigned long long int) 1349338238)), (3ULL))))))))));
        var_16 = ((/* implicit */unsigned long long int) (-(((int) 2482574952U))));
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((/* implicit */long long int) (!((_Bool)1)));
        arr_18 [15U] [i_5] = (!((((+(((/* implicit */int) var_2)))) == (((/* implicit */int) ((unsigned char) 17508160126169500403ULL))))));
        var_17 ^= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 1674984270)) ? (2482574956U) : (((/* implicit */unsigned int) 1359574334)))));
    }
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1359574338)) < ((((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3651410393U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3562809725U)))) : (((((-1407086558252596224LL) + (9223372036854775807LL))) >> (((524287ULL) - (524265ULL)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        arr_28 [15ULL] [(unsigned char)3] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) ((min((((_Bool) (_Bool)1)), (((_Bool) 17299611209822512064ULL)))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))) / (-8600665552993056650LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10)))));
                        arr_29 [i_9] [i_7] [i_8] [i_9] [i_7] = ((/* implicit */long long int) (-((~((+(((/* implicit */int) (unsigned char)39))))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2266070262U) ^ (2266070262U)))) ? (((/* implicit */long long int) ((unsigned int) (unsigned char)10))) : (((((/* implicit */long long int) (-2147483647 - 1))) ^ (-1LL))))))));
                    }
                }
            } 
        } 
    } 
}
