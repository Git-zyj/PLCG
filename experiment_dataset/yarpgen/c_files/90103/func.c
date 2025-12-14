/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90103
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
    var_17 *= ((/* implicit */_Bool) (unsigned char)55);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (arr_3 [i_0] [i_0 + 2]) : (((arr_3 [i_0 + 3] [i_1]) ^ (((/* implicit */long long int) arr_4 [i_0] [i_0])))))) >> (((((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (signed char)127)))) - (108)))));
                arr_7 [(signed char)10] &= ((/* implicit */long long int) min((((((/* implicit */int) (signed char)62)) * (((/* implicit */int) (_Bool)1)))), (arr_4 [i_1] [i_1])));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_18 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)230)) <= (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_0) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_3 - 1])) + (33))) - (4)))))) || (((((/* implicit */int) arr_2 [i_0 + 1])) <= (((/* implicit */int) arr_2 [i_0 + 2]))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)87)) <= (((/* implicit */int) (unsigned char)60))));
                                var_21 ^= ((/* implicit */long long int) ((unsigned char) ((arr_2 [i_3 + 1]) ? (((/* implicit */int) arr_2 [i_3 + 3])) : (((/* implicit */int) arr_2 [i_3 - 2])))));
                                var_22 = arr_13 [i_0 - 1] [i_0 - 1] [22LL] [i_3 - 2] [i_3 + 1] [i_3 + 1];
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0 + 3] [i_0] = ((((/* implicit */_Bool) ((long long int) ((arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [(_Bool)1])))))) ? (((((/* implicit */_Bool) ((signed char) arr_10 [i_0] [i_0] [i_0] [i_0]))) ? (((var_6) / (var_6))) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)175))))) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_1] [i_1] [i_1] [i_0 + 3]))))));
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (unsigned char)25);
                }
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned char)179))))))));
                    var_24 = ((/* implicit */unsigned char) (~(max((arr_8 [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_5])))))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_13 [i_0] [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_0])))))))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((((!(((/* implicit */_Bool) (signed char)0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (var_15))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) >= (7825286005665313873ULL)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    var_28 = ((/* implicit */signed char) ((long long int) ((var_13) ^ (((/* implicit */long long int) (~(var_6)))))));
}
