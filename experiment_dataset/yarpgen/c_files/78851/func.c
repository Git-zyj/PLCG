/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78851
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) arr_1 [(unsigned short)2]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) arr_0 [i_0 + 1]));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(max((((/* implicit */long long int) (signed char)-35)), (arr_10 [i_4 - 2] [i_1 + 1]))))))));
                            var_20 = (!(((/* implicit */_Bool) ((var_1) / (arr_3 [i_0 - 1])))));
                            arr_14 [i_0] [(signed char)19] [i_2] [i_3] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)39728)) - (39726)))))))));
                            var_21 = ((/* implicit */unsigned char) (+(((var_3) | (((/* implicit */long long int) 1565147463))))));
                        }
                        var_22 = ((/* implicit */long long int) min((var_22), ((+(((long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_2] [11LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [20] [20] [i_3 + 1]))) : (arr_13 [i_1 - 1] [i_1 - 1] [i_2] [5ULL]))))))));
                        var_23 = ((/* implicit */signed char) max((arr_11 [i_0] [i_0 + 1] [i_1 + 1] [i_3 - 1]), ((+(((/* implicit */int) arr_4 [i_0 + 1]))))));
                    }
                } 
            } 
        } 
        arr_15 [18LL] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1])))) ? (min((arr_13 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_13 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))) : ((~(arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))));
    }
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */int) var_5)), ((-(var_13)))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_3))))));
}
