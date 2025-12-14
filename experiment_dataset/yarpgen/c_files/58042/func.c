/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58042
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((536854528) >= (((/* implicit */int) var_8)))))) / (max((var_11), (((/* implicit */unsigned int) var_13)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((var_6) >> (((var_7) + (1295110125))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((var_6) < (arr_8 [i_0] [i_0] [i_0] [17ULL] [i_2] [i_3]))) ? (((/* implicit */int) ((arr_1 [i_0] [i_3]) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [6LL] [i_1] [i_1]))) : (arr_2 [i_1])))))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [(signed char)3] [i_1] [i_1] [12LL])) >= (var_7))))));
                        arr_10 [16U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((3974294013U) & (320673283U))), ((~(var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11069))) : (4824085519417068293ULL)));
                    }
                    arr_11 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) ((signed char) var_11));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 23; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_1] [i_4 - 1] = (+(((((/* implicit */long long int) 3974294013U)) + (479412266135108628LL))));
                        arr_16 [i_0] [i_0] [(signed char)11] [21LL] [(unsigned short)8] = ((/* implicit */_Bool) ((signed char) ((unsigned int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31785))) : (var_11)))));
                        var_15 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_14 [i_4 - 1] [i_2]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-53)) ? (((((/* implicit */_Bool) max((var_2), (arr_8 [i_0] [i_1] [i_2] [(signed char)1] [i_5] [i_5])))) ? (((((/* implicit */_Bool) 13622658554292483323ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_4] [10ULL]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)51))))))));
                            arr_19 [i_0] [11LL] [i_2] [i_4] [12U] = ((((arr_0 [i_0] [i_4 + 1]) != (min((arr_0 [i_0] [(signed char)0]), (((/* implicit */unsigned long long int) arr_17 [i_0] [15U] [i_2] [i_2] [i_5])))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */unsigned int) var_7)) : (arr_2 [i_2]))) : (var_2));
                            arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_0)) > (1431402151))))))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_5])) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (arr_1 [i_0] [i_5])));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_7))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1891474756)) ? (((/* implicit */unsigned int) 1891474747)) : (var_11))))))));
                            arr_24 [(_Bool)1] [i_1] [i_2] [i_2] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) -1431402151);
                        }
                        var_19 = ((/* implicit */short) max(((unsigned short)29837), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13)))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(var_6))))));
}
