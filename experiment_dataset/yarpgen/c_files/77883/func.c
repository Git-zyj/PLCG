/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77883
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (-167022768)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) < (arr_1 [i_1])))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_12 *= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (((((/* implicit */_Bool) 1231073846316790468LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_1 [i_2])))))), (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) & (((((/* implicit */int) arr_5 [(signed char)0] [i_2] [i_1] [i_0])) - (((/* implicit */int) (unsigned char)255))))))));
                            var_13 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((167022782) % (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_1] [i_0])) ? (-167022768) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (unsigned char)62)))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (var_1) : (((/* implicit */int) ((short) -167022768))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_2))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((2085481053U) != (2085481053U))) ? (((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned char)97)) - (85))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)51084))))))) ? (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31))) & (2209486242U)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) % (4456450555028501842LL))))) : (((/* implicit */long long int) 2436362963U))));
}
