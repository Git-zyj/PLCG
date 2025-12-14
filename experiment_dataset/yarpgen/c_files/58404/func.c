/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58404
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (879022262U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))))) - (((/* implicit */unsigned int) -2053751585))));
                    arr_9 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned short)14796))))));
                    arr_10 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) arr_4 [i_0] [(short)4] [i_2])) ? (arr_4 [i_2] [(_Bool)1] [i_0]) : (arr_4 [i_0] [(signed char)0] [i_2])))));
                }
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    arr_13 [i_1] [i_1] [(_Bool)1] [0] = (_Bool)1;
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_8);
                    arr_15 [i_1] [4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((max((arr_4 [(signed char)10] [10U] [i_3]), (((/* implicit */long long int) var_4)))) ^ (arr_6 [i_3] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))));
                }
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned long long int) ((int) var_6)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_13) : (var_13)))) ? (min((((/* implicit */unsigned long long int) 1U)), (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) (unsigned char)185)))))))) ? (((((/* implicit */_Bool) var_7)) ? (17592186043904ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (((((/* implicit */int) (unsigned short)65535)) | (var_6))))))));
    var_17 = ((/* implicit */int) var_0);
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (83197007U)))))))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) 1703635047))))))));
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((4294967294U), (((/* implicit */unsigned int) var_8))))) ? (min((((/* implicit */unsigned long long int) var_1)), (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (83197007U)))))) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_9))))));
}
