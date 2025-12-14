/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70873
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63545)) ^ (((/* implicit */int) (unsigned char)242))))) ? (min((max((753195400U), (((/* implicit */unsigned int) arr_1 [i_1])))), (((/* implicit */unsigned int) max((arr_4 [i_0] [i_0] [i_2]), (((/* implicit */short) var_10))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) arr_0 [i_1])))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_0 - 1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0 - 1] [(unsigned short)14] [i_0] [i_4] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_3 + 1] [i_2] [i_1]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_3 - 1] [i_4]))) : (2198736463281307869ULL)))));
                            var_12 = ((/* implicit */int) var_10);
                        }
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_13 *= ((/* implicit */int) min(((!(((/* implicit */_Bool) -6526335053155465881LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_5] [i_3 + 1]))) > (16248007610428243729ULL)))));
                            var_14 = ((/* implicit */unsigned int) var_1);
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [(unsigned char)2] [i_1] [(signed char)3] [i_3 - 1] [i_1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((-(((unsigned long long int) -2147483643))))));
                            arr_20 [(signed char)1] [i_3] [i_0] [i_0] [(signed char)1] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_0] [i_6]);
                            var_16 = ((/* implicit */long long int) 2429737496U);
                            arr_21 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (6526335053155465881LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5963))) + (((arr_9 [i_0] [i_1] [i_0]) << (((((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1])) - (65184))))))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                        {
                            var_17 = (!(((/* implicit */_Bool) 16040606924379310879ULL)));
                            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_3 - 1] [i_0 - 1])) || (((/* implicit */_Bool) (unsigned short)61529)))))));
                        }
                        for (short i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((arr_6 [i_2] [i_1]), (((/* implicit */int) (short)-1834)))))));
                            var_20 = ((/* implicit */int) (((~(2406137149330240736ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            arr_26 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_3 + 1] [i_0 - 1])) / (arr_6 [i_3 - 1] [i_1])))) ? (((((/* implicit */int) arr_5 [1U] [i_1] [i_3 + 1] [i_0 - 1])) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_3 + 1] [i_0 - 1])))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)4006))))));
                        }
                        arr_27 [i_0] [(unsigned short)4] [i_2] [i_2] = var_3;
                        var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-32562)))))))), (arr_9 [i_0 - 1] [i_1] [i_2])));
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_2))));
                        var_23 *= ((/* implicit */long long int) var_9);
                        var_24 *= ((/* implicit */signed char) (unsigned char)242);
                    }
                    arr_30 [i_0] [i_1] [i_2] |= var_3;
                    arr_31 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-31)) & (((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 16040606924379310879ULL))))) : (((((/* implicit */int) arr_22 [i_0] [i_0 - 1] [i_0 - 1])) / (((/* implicit */int) arr_22 [i_0] [i_0 - 1] [i_0 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_10 = 3; i_10 < 10; i_10 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned char)90))))));
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            arr_38 [i_11] [i_11] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */int) arr_37 [i_10])) != (((/* implicit */int) var_2))))), (var_1)));
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)4011))))) : ((-(var_8))))))));
        }
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) 16248007610428243736ULL))));
    }
}
