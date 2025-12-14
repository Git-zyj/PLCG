/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55177
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_10 |= ((/* implicit */unsigned int) (((-(((((/* implicit */int) var_8)) / (((/* implicit */int) arr_2 [i_0])))))) != ((~(((/* implicit */int) arr_4 [i_1] [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) -7350550319612546300LL))) * (min((((/* implicit */long long int) (short)15714)), (((((/* implicit */_Bool) -9LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))))));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))))), ((unsigned short)0)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1080119687144398456LL))) >= (0LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned char) max((((unsigned int) -1080119687144398427LL)), ((+(var_9)))));
                    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    arr_9 [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (max((((/* implicit */long long int) 1363258266U)), (min((10LL), (((/* implicit */long long int) 4294967295U)))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-1742)), (min((4294967295U), (((/* implicit */unsigned int) (unsigned short)14567)))))))));
                }
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */short) min((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9)) << (((((/* implicit */int) (short)31164)) - (31137))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (-(var_9)));
}
