/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59276
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) min((max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), ((~(((/* implicit */int) (_Bool)1))))));
                            var_18 = (~(((((/* implicit */int) ((signed char) 1846712169))) >> (((((/* implicit */_Bool) 1846712194)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_0] [i_0] [i_1] [i_3]))))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((max((9223372036854775807LL), (((/* implicit */long long int) arr_1 [i_3] [i_3])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-3064687443046169LL) + (((/* implicit */long long int) 511212910))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (arr_3 [i_4])));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_21 = ((((/* implicit */_Bool) ((arr_2 [i_4] [i_4]) ? (((/* implicit */int) (_Bool)1)) : (arr_7 [i_5] [i_4] [i_1] [i_0])))) ? ((-(1846712194))) : ((+(((/* implicit */int) (_Bool)1)))));
                        var_22 ^= ((((-846280355) % (arr_7 [i_4] [i_1] [i_4] [i_5]))) | (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_4] [i_4] [i_5])));
                        arr_14 [i_0] [i_4] [(signed char)18] [i_5] = ((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_5] [i_4]) : (((/* implicit */long long int) -846280339))))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_11 [i_5] [i_1] [i_0])));
                    }
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_4] [i_4] = ((/* implicit */_Bool) (-(arr_8 [i_0])));
                        arr_20 [i_0] [(_Bool)1] [i_0] [i_4] = ((/* implicit */_Bool) arr_18 [i_4]);
                        var_23 = ((/* implicit */_Bool) (+(-268435456)));
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-1620529988) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_6])) : (((((/* implicit */_Bool) -846280355)) ? (-846280355) : (((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1] [i_1] [i_1] [i_1])))));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        var_25 = (((+(1620529988))) - (((/* implicit */int) arr_2 [i_0] [i_1])));
                        var_26 = ((/* implicit */_Bool) 9223372036854775807LL);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_4])) || ((_Bool)1)));
                        arr_23 [i_0] [i_0] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : ((~(arr_16 [i_0])))));
                    }
                    var_28 = ((/* implicit */long long int) ((signed char) (-(-1846712202))));
                    arr_24 [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / (arr_5 [i_0] [(_Bool)1]))) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_1] [i_1] [i_0] [i_0] [i_0])))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    arr_28 [i_8] = ((/* implicit */_Bool) ((arr_17 [i_0] [i_0] [i_8] [i_8]) + (3918054452826255477LL)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (long long int i_10 = 3; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (-1620529988) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_15 [i_10 - 1] [i_10] [i_10 - 2] [i_9] [i_8] [i_0])) : ((-(-846280356)))));
                                var_30 = (!(((/* implicit */_Bool) (((_Bool)1) ? (6712795235170220657LL) : (((/* implicit */long long int) 1572864))))));
                                arr_35 [i_0] [i_0] [i_8] [i_9] [i_9] = ((arr_15 [i_8] [i_9] [i_1] [i_10 - 1] [i_10] [i_10 + 1]) ? (((/* implicit */int) arr_15 [i_9] [i_9] [i_9] [i_10 + 2] [i_10] [i_1])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_8] [i_10 - 1] [i_0] [i_1])));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    var_32 = ((((/* implicit */_Bool) ((-846280365) | (2147483632)))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)7))))));
                }
                arr_36 [i_0] = ((_Bool) max((4804929148064369817LL), (((/* implicit */long long int) max(((signed char)66), (((/* implicit */signed char) (_Bool)1)))))));
            }
        } 
    } 
    var_33 = ((((var_5) ? (max((var_6), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (((_Bool)1) ? (var_15) : (((/* implicit */int) (_Bool)1))))))) != (((/* implicit */long long int) ((/* implicit */int) ((var_5) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)32)) - (27)))))))))));
}
