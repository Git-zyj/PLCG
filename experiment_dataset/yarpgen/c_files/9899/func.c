/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9899
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
    var_12 *= ((/* implicit */unsigned long long int) (~(-1463527192)));
    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((int) var_6))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10788))) : (-2020137005643989252LL))) / (((var_6) ^ (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) -1593609881)) || (((/* implicit */_Bool) -1LL)))), ((!(((/* implicit */_Bool) var_5))))))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((19LL), (9223372036854775807LL)))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (max((((/* implicit */long long int) var_0)), (var_5))) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned short)41809);
        var_15 = ((/* implicit */long long int) (((~((-(var_6))))) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1])))));
    }
    for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1]))));
        var_17 &= ((/* implicit */long long int) arr_1 [i_1] [i_1]);
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 + 3] [i_1]))))) ? (((/* implicit */unsigned long long int) var_5)) : ((-(arr_2 [i_1 + 1] [i_1 - 1])))));
        arr_8 [i_1] = ((((((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) var_4))))) ? ((+(var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 19LL)))))) + (9223372036854775807LL))) << (((((max((min((-2020137005643989268LL), (((/* implicit */long long int) var_1)))), (((-1LL) % (var_5))))) + (58LL))) - (57LL))));
        var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1])) ? (var_0) : (((/* implicit */int) var_4)))) < (((/* implicit */int) arr_4 [i_1 + 2])))) ? (((((/* implicit */int) (signed char)1)) << (((-25LL) + (43LL))))) : (((/* implicit */int) arr_5 [12U] [i_1]))));
    }
    for (short i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43591)))))) : (((/* implicit */int) min(((unsigned char)56), (((/* implicit */unsigned char) (signed char)-47)))))))) ? (((unsigned long long int) (unsigned char)5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_21 = ((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_3])) > (((((/* implicit */_Bool) arr_6 [(unsigned char)10])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) var_10))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_23 |= ((/* implicit */_Bool) (short)32757);
                                var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_2)))));
                                arr_25 [i_3] [i_3] [i_4] [i_5] [i_3] [i_6] [(_Bool)1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_5))))));
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */unsigned char) ((long long int) -2502719158473605593LL));
                }
            } 
        } 
        arr_26 [i_3] [10U] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(arr_9 [(signed char)4])))), (max((((/* implicit */unsigned long long int) -397664909)), (arr_18 [i_3] [(_Bool)1])))));
    }
}
