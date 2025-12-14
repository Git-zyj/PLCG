/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58385
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
    var_11 = ((/* implicit */_Bool) (+(max((-2826286878641294247LL), ((-9223372036854775807LL - 1LL))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned int) max((((((long long int) (unsigned short)10691)) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) -686302064)) ? (((/* implicit */int) (unsigned short)10677)) : (((/* implicit */int) (unsigned char)31))))))), (((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_8))), (((int) var_2)))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 21; i_2 += 4) 
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (arr_9 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)233)) : (arr_7 [i_0] [i_1] [i_2]))) : (arr_4 [i_2 - 4] [i_2 - 4] [i_2 - 4]))))))));
                    arr_10 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0]) % (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1]))))) : (max((arr_9 [i_0] [i_0]), (arr_8 [i_0] [i_1] [(_Bool)1] [i_1]))))), (((/* implicit */unsigned long long int) -3502671315912970557LL))));
                }
                for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */int) ((signed char) ((int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)54855))))));
                    arr_15 [i_3] [i_1] [i_1] [i_0] = (~((+((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1] [i_3])))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) (~(5862339630755748902LL)))))))));
                    var_16 = ((((/* implicit */_Bool) var_4)) ? (((int) arr_1 [i_0] [i_1])) : (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_0]))));
                }
                for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_18 [i_1] [i_4]) % (((/* implicit */unsigned long long int) arr_5 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_4])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) != (arr_2 [i_1])))) : (((((/* implicit */_Bool) arr_0 [12])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0]))))))) : (min(((+(arr_18 [i_1] [0]))), (max((arr_9 [i_0] [i_0]), (((/* implicit */unsigned long long int) 2109413781))))))));
                    arr_19 [i_0] [i_0] [i_4] [i_4] = (((((~(arr_7 [i_4] [i_1] [i_0]))) == (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (arr_4 [i_0] [i_1] [i_4]) : (((/* implicit */int) (unsigned short)10662)))))) ? (((arr_7 [i_0] [i_1] [i_1]) - (((/* implicit */int) arr_14 [i_0] [i_1] [i_4] [i_0])))) : (arr_3 [(short)4]));
                }
                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) (unsigned short)10682)) ? ((-(arr_7 [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [(unsigned char)3])) >= (arr_18 [i_0] [i_0]))))))));
            }
        } 
    } 
}
