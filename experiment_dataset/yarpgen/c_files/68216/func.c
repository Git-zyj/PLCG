/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68216
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
    var_10 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_3))) - (((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))))))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)255))) ? ((-(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3742044014U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (34099)))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (var_3)))), (((arr_0 [i_0] [i_0]) >> (((552923281U) - (552923267U)))))))));
        var_12 = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4055801167931898036LL)))) <= (279791948U)))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) 552923281U))))) ? (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) ((unsigned int) arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) -7739319650266773209LL);
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_0]), (arr_4 [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))) : (((/* implicit */long long int) ((arr_4 [i_0]) * (arr_4 [i_0]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 2) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_0 [i_2 - 4] [i_2])));
            arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)42682)) >> (((((/* implicit */int) (unsigned char)245)) - (242)))));
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)10)) & (((/* implicit */int) var_9)))) >> (((((arr_6 [i_3]) - (((/* implicit */long long int) arr_4 [i_3])))) - (3878724841867087899LL))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_20 [i_3] [i_4 - 1] [i_5] [i_5] = ((/* implicit */long long int) ((signed char) arr_18 [i_3] [i_5 + 2] [i_4 - 1]));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_26 [i_3] [i_4] [i_5 + 1] [i_6] [i_7] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_5 - 3] [i_5 - 3])) >= (((/* implicit */int) arr_1 [i_5 - 3] [i_5 - 2]))));
                                var_15 = ((/* implicit */unsigned short) (~(arr_16 [i_5 + 1] [i_5] [i_5 + 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3]))) : (((((/* implicit */_Bool) 5351614376886222490LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (7739319650266773209LL)))));
        arr_27 [i_3] = ((arr_15 [i_3] [i_3]) && (((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 2) 
    {
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_31 [i_8]))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(var_3))))));
                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_0)) + (((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (arr_32 [i_9] [i_9]) : (((/* implicit */unsigned long long int) 7739319650266773209LL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 552923303U)) ? (((/* implicit */long long int) var_5)) : (-5425433662555302851LL)))))) ? ((~((~(((/* implicit */int) (unsigned char)70)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_7))))));
}
