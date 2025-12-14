/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78964
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)0), (((/* implicit */short) ((3384304823134799118LL) != (((/* implicit */long long int) ((/* implicit */int) var_0))))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)49)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)15)))))) : (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [(short)5] [i_2] = ((/* implicit */short) (+(((((((/* implicit */int) arr_7 [(_Bool)1] [i_2])) == (((/* implicit */int) var_4)))) ? (((((/* implicit */_Bool) arr_0 [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [16U] [(_Bool)1] [0]))) : (arr_0 [(short)4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_2])))))));
                    arr_10 [i_2] = ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (unsigned short)1394)) : (-203371814));
                    var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [(_Bool)1] [(unsigned char)16]))) | (arr_0 [9])))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) ((((/* implicit */_Bool) 14793943112028487022ULL)) && (((/* implicit */_Bool) arr_0 [4ULL]))))) - ((-(((/* implicit */int) (unsigned short)7331))))))));
                    var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [6] [(_Bool)1] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_2] [(short)2] [i_2]))))), (((arr_5 [14] [18U] [(unsigned char)15]) << (((/* implicit */int) arr_3 [12U] [(signed char)19])))))), (max((((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_2])), (13274340204523836243ULL)))));
                    arr_11 [(short)10] [i_2] [i_2] [(unsigned short)16] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)64142))));
                }
            } 
        } 
    } 
}
