/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94862
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
    var_11 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-89)) % (((/* implicit */int) (short)-25255))))) == (min((3ULL), (((/* implicit */unsigned long long int) (signed char)15)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-108)) <= (((/* implicit */int) (signed char)127)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-89)), (832662809502503789LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (short)-25246)) : (((/* implicit */int) (signed char)3))))) : (17740485182468300247ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1536824116)) || ((_Bool)1))) ? (((((/* implicit */_Bool) (signed char)-14)) ? (7548213575734880453ULL) : (12612598253795886699ULL))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))));
                var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)17)) ? (((/* implicit */int) (short)25244)) : (((/* implicit */int) (signed char)8))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91))) : (16923891172162355370ULL)));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 832662809502503779LL)) ? (3459910656U) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)3)))))));
                }
                for (signed char i_3 = 1; i_3 < 24; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-96)) * (((/* implicit */int) (unsigned char)90))))) ? (((16ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))))) : (((((8115893701302160173ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15398))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-91)) ? (3459910670U) : (3459910656U)))))))))));
                    arr_13 [1ULL] [1ULL] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */int) (signed char)3)) ^ (((/* implicit */int) (short)32764)))), (((((/* implicit */_Bool) 2998821394U)) ? (((/* implicit */int) (signed char)-14)) : (-638659433)))));
                }
            }
        } 
    } 
}
