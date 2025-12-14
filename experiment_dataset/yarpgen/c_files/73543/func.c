/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73543
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 655606122U))));
        var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_11 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)49076)), (((((/* implicit */_Bool) var_3)) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) -750929544)) ? (((/* implicit */long long int) -733642080)) : (-6489582020861178094LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)56091), (((/* implicit */unsigned short) (_Bool)0)))))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) ^ (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_1 [i_3]))))))), (((((/* implicit */unsigned long long int) 6489582020861178094LL)) * (min((((/* implicit */unsigned long long int) var_3)), (16901241274671282192ULL))))))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3639361174U)) ? (-167276515333285759LL) : (167276515333285759LL)));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */signed char) (unsigned char)107);
    var_16 = (+(((/* implicit */int) ((((/* implicit */int) var_4)) < (((((/* implicit */_Bool) (unsigned char)188)) ? (-2082942594) : (((/* implicit */int) (signed char)124))))))));
}
