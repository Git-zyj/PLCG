/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/651
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65265)) ? (((/* implicit */int) (unsigned short)261)) : (((/* implicit */int) (unsigned char)0))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) (unsigned short)65274)) / (((/* implicit */int) (unsigned short)261)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)105)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17719)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) var_2))))), (0LL))))))));
                                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)170)) != (((/* implicit */int) (unsigned short)65520)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2]))))) : (((/* implicit */int) (unsigned short)17708))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))) : (2LL)));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_7)) - (1315)))));
                            }
                        } 
                    } 
                    arr_14 [(unsigned char)16] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)10065))))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */long long int) (((-(arr_10 [i_0] [i_0] [i_0] [i_0]))) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-126))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_13 [i_0] [7] [7] [i_0]))))))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_11))))) * (-1LL)))) ? ((~(((/* implicit */int) ((-1LL) >= (((/* implicit */long long int) 1739174787))))))) : ((-(((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (short i_5 = 4; i_5 < 11; i_5 += 4) 
    {
        arr_18 [i_5 + 2] [i_5 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 724626803U)) ? (((((/* implicit */_Bool) 456727791U)) ? (6LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) (+(arr_10 [i_5 - 2] [i_5] [i_5] [i_5]))))));
        arr_19 [i_5] = ((((int) arr_13 [i_5] [i_5] [i_5 - 3] [i_5])) == (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 9223372036854775807LL))))));
        arr_20 [(unsigned char)5] = arr_4 [i_5 - 2] [i_5];
        var_19 = ((/* implicit */unsigned short) ((144115188075855872LL) / (((/* implicit */long long int) var_9))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) (unsigned char)39)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (2636763803U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [10]))))))))));
    }
}
