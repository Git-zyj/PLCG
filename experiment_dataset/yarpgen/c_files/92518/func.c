/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92518
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
    var_15 = ((/* implicit */unsigned char) (!((!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_13 [(signed char)6] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) var_14)), ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) arr_1 [i_0])))))))));
                        var_17 = ((/* implicit */signed char) var_6);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [i_4] = ((/* implicit */short) min((min((((/* implicit */int) min((arr_11 [i_4] [i_2] [i_1] [i_0]), (arr_11 [i_0 - 2] [i_1] [i_2] [i_4])))), (((((/* implicit */int) arr_2 [i_0 - 1] [i_1])) >> (((((/* implicit */int) var_13)) - (24237))))))), (((((/* implicit */_Bool) 87328456)) ? (((/* implicit */int) (unsigned short)10320)) : (((/* implicit */int) (unsigned char)254))))));
                        arr_17 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -935648222)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((935648222), (var_0)))) || (((/* implicit */_Bool) min((var_13), (((/* implicit */short) arr_5 [i_0]))))))))));
                    }
                    arr_18 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 935648209)) ? (arr_12 [(unsigned char)17] [i_1] [i_1] [3LL]) : (((/* implicit */int) (unsigned short)54417))))));
                    arr_19 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)9]))) - (arr_15 [(unsigned char)17] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) var_0)) : (((13509311376085533042ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11103))))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2]))))) >> (((/* implicit */int) var_8)))))));
                }
                var_18 = ((/* implicit */unsigned char) var_6);
                var_19 = var_3;
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)243)) > (((/* implicit */int) (unsigned short)54432))))), (var_11)));
}
