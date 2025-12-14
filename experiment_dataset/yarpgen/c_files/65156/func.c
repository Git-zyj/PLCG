/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65156
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_9);
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((arr_4 [(unsigned short)3]), (4472072796329892501LL)))))) ? (((((unsigned long long int) arr_1 [i_1] [i_1])) * (((((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])) & (arr_3 [4]))))) : (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) ((_Bool) var_10))))))));
        arr_5 [(short)5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [6U])) ? (((((/* implicit */_Bool) (~(var_5)))) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (1020255826U) : (var_13)))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) -1593836839)) == (var_9)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) ((arr_3 [i_2]) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) arr_8 [(unsigned char)1] [i_2])))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [i_2])), (((arr_1 [i_2] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2046)))))))) : (max((arr_6 [i_2] [i_2]), (((/* implicit */long long int) arr_7 [7LL] [i_2]))))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) var_2)) / (var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))) : (max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) != (var_12)))), (((var_13) >> (((var_5) + (2117048492)))))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((((/* implicit */_Bool) arr_10 [i_3])) ? (4472072796329892496LL) : (((/* implicit */long long int) arr_10 [i_3])))), (((/* implicit */long long int) arr_10 [i_3])))))));
        var_25 = ((/* implicit */short) (+(max((var_6), (max((var_6), (var_15)))))));
        var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) max((-755697751), (arr_10 [i_3])))), (((((/* implicit */_Bool) -894096580)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 0)) : (4472072796329892508LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))))))))));
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            var_27 -= ((unsigned char) max((((/* implicit */long long int) (_Bool)1)), (var_4)));
            var_28 ^= ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483647))))), (arr_13 [i_4 + 1]))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_29 |= ((((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [19LL])) || (((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_6] [i_6])) >= (arr_19 [i_7] [i_3] [i_3] [i_3]))))))));
                            var_30 = ((/* implicit */_Bool) min((max((var_16), (((/* implicit */long long int) ((arr_23 [i_3] [4ULL]) / (arr_23 [i_3] [i_5])))))), (-4472072796329892508LL)));
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (+(755697750)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_5]))) + (arr_21 [i_3] [16] [i_4] [i_5])))) > (min((((/* implicit */unsigned long long int) var_12)), (14679833807895924053ULL))))))) : (arr_21 [i_3] [i_4 + 1] [i_5] [i_5])));
                arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_4] [i_3] [i_3]))) : (3766910265813627573ULL)))) ? (max((-4472072796329892507LL), (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_5] [i_4 + 2])))))))), (((arr_18 [i_5] [i_5] [(unsigned char)15] [i_5] [i_3]) + (((/* implicit */unsigned long long int) arr_13 [1U]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                var_32 = ((/* implicit */unsigned long long int) (!(((0) <= (var_7)))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    arr_32 [(signed char)9] [(unsigned char)1] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4] [i_4 + 2] [i_9])) ? (((/* implicit */int) (short)2048)) : (((/* implicit */int) (short)4765))));
                    var_33 = ((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_4 - 1] [i_4] [i_4 + 2]))));
                }
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    arr_35 [(_Bool)1] [4LL] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)183)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_23 [i_3] [i_10])) : (arr_13 [i_3]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 0)) + (arr_23 [i_4] [i_3]))))));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((int) 0)))));
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_15)))))));
                }
            }
            var_36 = ((/* implicit */short) ((unsigned int) ((int) arr_23 [i_4 - 1] [i_4 - 1])));
        }
        arr_36 [i_3] = ((/* implicit */long long int) (~(max((arr_30 [i_3] [i_3] [(_Bool)1] [i_3]), (((/* implicit */unsigned int) arr_20 [i_3] [i_3] [i_3] [i_3]))))));
    }
}
