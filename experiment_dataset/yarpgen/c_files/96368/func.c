/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96368
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_18 = 176126859128100778ULL;
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3 + 2] [i_2] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_1 [i_0 + 2])) - (((/* implicit */int) arr_1 [i_0 + 2])))), (((/* implicit */int) min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1]))))));
                            arr_14 [i_0 + 2] [i_2] [i_2] [22ULL] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)1601))))) % (arr_5 [i_0] [i_0 - 2])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)117))))) : (max((arr_10 [i_3 - 2] [i_1] [i_3 - 2] [i_3 - 2] [i_4] [i_1] [i_2]), (arr_10 [i_3 + 2] [i_3 + 2] [i_2] [i_3 + 2] [i_4] [i_3 + 2] [i_3 + 2])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) arr_10 [i_0] [10] [i_2] [10] [i_5] [i_5] [i_1]);
                            var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)18792)) ? ((~((-2147483647 - 1)))) : (((((/* implicit */int) (unsigned short)10947)) & (((/* implicit */int) (signed char)80))))))));
                            var_21 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-35), (((/* implicit */signed char) (_Bool)1)))))) * (arr_8 [i_0] [i_1] [(unsigned short)13] [i_3 - 2] [i_5])))));
                            arr_17 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) (unsigned short)54572)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-115))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_21 [(signed char)11] [i_2] = ((/* implicit */_Bool) (-(8616569878455025512ULL)));
                            var_22 = ((/* implicit */short) (+(min((7761314685684134064ULL), (((/* implicit */unsigned long long int) arr_0 [i_3 + 2]))))));
                            var_23 ^= ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0] [i_6] [i_1])) ? (((/* implicit */unsigned long long int) arr_6 [i_6])) : (7761314685684134052ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)54686)) & (((/* implicit */int) var_9))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22638)))));
                            var_24 -= ((/* implicit */_Bool) (unsigned short)1227);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) max(((!(((/* implicit */_Bool) arr_6 [i_2])))), ((!(((/* implicit */_Bool) var_14))))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-33))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3 - 1]))) : (arr_15 [i_0] [i_0 + 2] [i_2]))) - (80ULL)))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */int) var_17)) < (((/* implicit */int) arr_3 [i_0 + 1] [i_1])))) ? (min((arr_19 [i_0 - 1] [i_0 + 2]), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                            var_27 -= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 2]);
                            arr_24 [i_2] = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))) * (1602258368130610890ULL))));
                            var_28 = ((/* implicit */unsigned char) (unsigned short)45165);
                        }
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((min(((~(10685429388025417552ULL))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_0])) ? (10685429388025417550ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0])))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (-2147483647 - 1))), (-342839701430857429LL))))))))))));
                        arr_25 [i_0] [i_2] [i_2] [i_2] [i_3 + 2] [i_2] = ((/* implicit */short) max(((-(10685429388025417552ULL))), ((-(((583416101111439414ULL) * (9830174195254526101ULL)))))));
                        arr_26 [i_0] [i_2] [i_2] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)54572)), (13364422516686180261ULL))))))), (arr_2 [i_0]));
                        var_30 = ((/* implicit */int) ((((9830174195254526101ULL) | (((/* implicit */unsigned long long int) arr_6 [i_0])))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (arr_15 [i_0] [i_0] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */int) (signed char)110);
                        arr_29 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [20ULL]))) : (arr_15 [i_0] [i_1] [i_2]))), (((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)0] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22614))))))) - (((/* implicit */unsigned long long int) max((min((((/* implicit */int) (signed char)8)), (1889203011))), (((/* implicit */int) max(((unsigned short)10964), (((/* implicit */unsigned short) (signed char)21))))))))));
                    }
                }
            } 
        } 
        arr_30 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (arr_15 [2ULL] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) arr_6 [i_0]))))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (10685429388025417551ULL))) : (((/* implicit */unsigned long long int) arr_6 [i_0]))));
    }
    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 1) 
    {
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [(unsigned short)3] [i_9] [i_9] [i_9] [i_9 - 1])) ? ((~((~(((/* implicit */int) var_14)))))) : ((((~(-758625854))) - (2147483647)))));
        var_33 -= ((/* implicit */signed char) (((((~(((/* implicit */int) (unsigned char)2)))) + (2147483647))) << (((((max((arr_10 [i_9] [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 2] [8LL] [i_9 + 1]), (arr_10 [i_9] [i_9 + 1] [i_9 + 1] [(signed char)12] [i_9] [i_9 - 1] [i_9 + 2]))) + (1376455588))) - (21)))));
    }
    var_34 = ((/* implicit */int) -2403051792981856288LL);
}
