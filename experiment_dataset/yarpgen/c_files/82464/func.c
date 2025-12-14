/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82464
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (((arr_1 [(_Bool)1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))))))))));
                var_14 = ((/* implicit */signed char) (!(var_10)));
                arr_7 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((var_6) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_7))))))));
        arr_10 [4ULL] [4ULL] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_1 [10]) : (((/* implicit */unsigned long long int) ((int) 799492418))))) & (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_2])), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_5 [(unsigned char)2])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_2]))) : (((arr_1 [i_2]) / (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [(signed char)5]))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(signed char)3] [i_3] [i_2])) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (signed char)-5)) ? (-799492405) : (((/* implicit */int) (signed char)-1))))));
            var_18 |= ((/* implicit */_Bool) ((unsigned short) arr_1 [(signed char)18]));
        }
        var_19 = (_Bool)1;
        arr_15 [(_Bool)1] |= ((/* implicit */unsigned short) -6277211643664609456LL);
    }
    var_20 = ((/* implicit */signed char) (((((+(-1LL))) + (9223372036854775807LL))) >> (((((unsigned long long int) var_7)) - (50043ULL)))));
}
