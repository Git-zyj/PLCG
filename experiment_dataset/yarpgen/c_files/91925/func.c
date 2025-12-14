/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91925
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
    var_18 ^= ((/* implicit */unsigned char) 2114523625);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : ((~(((var_11) & (((/* implicit */unsigned long long int) -2114523625)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (var_2)));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 2114523624);
                }
                for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 3) 
                {
                    arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) var_1);
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) -2114523625));
                }
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_23 [i_6] [i_1] [i_4] [i_1] [i_6] = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0] [i_0]));
                                arr_24 [i_0] [8U] [i_1] [5ULL] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) 1152003825U))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_5 - 2] [i_5 + 2])), (var_13)))) : ((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 5448041196510788445LL)) : (var_16)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) min((var_21), (639661322801372259LL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((((((/* implicit */_Bool) max((-9032596757501436411LL), (((/* implicit */long long int) arr_17 [i_0] [i_0] [13U]))))) ? (((/* implicit */long long int) ((((var_4) + (2147483647))) << (((((/* implicit */int) var_0)) - (184)))))) : ((-9223372036854775807LL - 1LL)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -167183390)) / (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)65), (var_10))))) : ((-(712488219U))))))))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6520683119891022381LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75)))))), (18446744073709551611ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (arr_25 [i_4] [i_7 - 1] [i_7 + 3] [i_7 + 3])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)17] [i_7 + 1] [i_7 + 2] [(unsigned char)17]))) * (var_11)))));
                    }
                    var_24 = ((/* implicit */long long int) ((arr_4 [i_0] [i_0]) >> (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((~(712488219U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))))) - (3582479059U)))));
                }
                for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_1))));
                    arr_32 [i_0] [i_1] [i_8] = -7424204833767173067LL;
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            {
                var_26 = ((/* implicit */long long int) max(((~(8478382279301787423ULL))), (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) -2659749852853902488LL))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_9)) : (var_16)))))))) : (var_1)));
}
