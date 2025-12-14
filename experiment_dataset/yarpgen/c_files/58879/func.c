/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58879
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
    var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */signed char) var_3)), ((signed char)-125)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (-5332506025048334225LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-125)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) : (4294967295U)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-94))))) : (((unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (signed char)114))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */long long int) arr_9 [i_0] [i_0]);
                                var_19 ^= ((/* implicit */unsigned int) 5332506025048334224LL);
                                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2] [i_4 + 2])))))) < (-7322953329856138532LL)));
                                var_21 = (signed char)-125;
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 3034409481251090893LL))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5] [i_1 + 4] [i_0] [i_0])) ? (max((-3893454830303802399LL), (((/* implicit */long long int) (signed char)113)))) : (((/* implicit */long long int) 1385066192U))));
                    arr_20 [i_0] [i_1 + 4] [i_1] = ((/* implicit */unsigned long long int) 940236676U);
                }
                for (short i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
                {
                    arr_23 [(unsigned short)10] [i_0] [i_1] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)123), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) < (arr_11 [i_0] [i_0] [(signed char)2] [i_0] [i_0] [i_0]))))))) ? (((long long int) ((unsigned short) 13350463806254149234ULL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_1] [i_6])) ? (3034409481251090885LL) : (9223372036854775802LL))))))));
                    arr_24 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -2459770473242669326LL)) ? (((((/* implicit */int) (signed char)-126)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_6] [i_0] [i_6 + 2] [i_6]))))));
                    arr_25 [i_1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13879))) : (2U)))) ? (((((/* implicit */unsigned long long int) 31648832U)) * (arr_5 [i_0] [i_6] [i_6]))) : ((-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)113)) + (((/* implicit */int) (signed char)113))))) ? (((((/* implicit */_Bool) 8748068288401555168LL)) ? (5096280267455402381ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) - (6063605489424818115LL))))))));
                    arr_26 [i_1] [i_1 - 1] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2108873569U)) ? (min((((9373234278477266680ULL) / (((/* implicit */unsigned long long int) -5332506025048334225LL)))), (((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])) + (18446744073709551611ULL))))) : (((((/* implicit */_Bool) arr_3 [i_1 + 4] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 3] [i_6] [i_6]))) : (16ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 4; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 3) 
                        {
                            {
                                arr_32 [i_1] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)15842))))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) (short)-1))))), (((9073509795232284935ULL) + (((/* implicit */unsigned long long int) 9223372036854775800LL)))))));
                                arr_33 [i_1] [i_1] [i_1] [i_7 - 1] [i_8] = ((/* implicit */signed char) 2285059834U);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) * (((/* implicit */int) ((min((33554431ULL), (11177589945884214125ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11LL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18769)))))))))));
}
