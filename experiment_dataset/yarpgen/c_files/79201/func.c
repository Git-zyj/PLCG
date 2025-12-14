/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79201
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
    var_14 = ((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (unsigned short)19751))))), (var_8)))), (((((var_1) <= (((/* implicit */int) var_10)))) ? (((((/* implicit */int) var_5)) << (((1248810982) - (1248810964))))) : (((((/* implicit */int) var_3)) | (((/* implicit */int) var_11))))))));
    var_15 ^= ((/* implicit */unsigned long long int) var_10);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)255)))) <= (((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)-75))))))) == (max(((-(var_6))), (((/* implicit */int) (short)29883))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) min((8259603122798164635ULL), (min((((((/* implicit */_Bool) (signed char)-85)) ? (249128478138757483ULL) : (10187140950911386980ULL))), (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (signed char)20)))))))));
                    var_17 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) max((-1), (((/* implicit */int) arr_3 [i_2]))))), (3221225472U))) | (((/* implicit */unsigned int) min((max((((/* implicit */int) arr_5 [(_Bool)1] [(unsigned char)6] [(_Bool)1] [i_2])), (arr_1 [(short)6]))), (((((/* implicit */_Bool) arr_6 [7ULL] [(unsigned short)4] [i_2] [i_2])) ? (((/* implicit */int) (short)7290)) : (((/* implicit */int) arr_0 [i_0 - 1])))))))));
                }
                arr_8 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) min((6560975581064932955LL), (((/* implicit */long long int) -742052469))));
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [9U] [i_0])) : (((/* implicit */int) (short)10653)))) - (((/* implicit */int) min((arr_5 [i_0 + 1] [i_1] [(_Bool)1] [(_Bool)1]), (arr_5 [i_0 - 1] [i_1] [i_0 - 1] [8U]))))));
            }
        } 
    } 
}
