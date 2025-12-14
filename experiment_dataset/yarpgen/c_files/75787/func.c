/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75787
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3864542507U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (max((((((/* implicit */_Bool) 3864542499U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34101))) : (4294967287U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 762176011U)) ? (8678904610201647260ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 - 1] [8U] [i_2 + 3] [i_2 + 2] [i_0]))) : (((((/* implicit */_Bool) arr_3 [0U])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6282))))))))));
                        arr_11 [i_0] [i_2] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_6 [(unsigned short)9]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 4] [i_3 - 1] [(unsigned short)1])) : (((((/* implicit */_Bool) (short)20916)) ? (((/* implicit */int) (short)-5974)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_9 [(short)8] [(short)8] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_3 + 1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (7324832891803134703LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22066))) : (min((((/* implicit */long long int) arr_7 [i_1] [i_1] [i_2] [i_3])), (-5314454149189921786LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((430424804U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_2] [8LL] [i_2] [i_2] [i_1] [i_0])))))))) ? ((-(((unsigned int) (unsigned short)34113)))) : (((3539400056U) >> (((((((/* implicit */_Bool) -1088619503552405098LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11721))) : (arr_0 [i_0] [i_0]))) - (11710U)))))));
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 321003074U)) ? (581142602U) : (0U)));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)53820)) ? (16512185156957401941ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19911)))));
    }
    var_22 = ((/* implicit */_Bool) var_14);
}
