/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55006
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
    var_10 = ((/* implicit */unsigned char) var_0);
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (-8124386455229128462LL) : (((/* implicit */long long int) 0))))) ? ((~(((/* implicit */int) var_6)))) : (((var_8) ^ (var_8)))))) ? (var_3) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1))))), (((var_0) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23)))))))));
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -900389522))))) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (-900389522)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) (((+(arr_0 [i_0] [(unsigned char)5]))) - (arr_1 [i_0] [(unsigned char)4])))) < ((~((~(4903333263383288519LL)))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (var_5))) : (((int) arr_2 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) < (arr_0 [i_0] [i_1]))))));
                var_13 += ((unsigned char) var_5);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) 6482054678166684550LL))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) -900389522)) ? ((-(arr_1 [i_3 - 1] [i_3 - 1]))) : ((-(1976042846)))));
                            var_16 = ((int) (~(arr_11 [i_1] [i_3 + 1] [i_1] [i_3 - 2] [i_3 - 1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
