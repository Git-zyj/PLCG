/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88690
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
    var_11 = ((/* implicit */unsigned long long int) var_4);
    var_12 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned short)5274)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) (unsigned char)245);
        arr_2 [(unsigned char)6] [i_0] = ((/* implicit */signed char) ((((arr_0 [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_9))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) - (((/* implicit */int) arr_0 [i_0 - 1])))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_12 [i_0 - 2] [i_1 + 2] [i_2 + 1] [i_3] [10] [i_3] [i_2] = ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_1 + 2] [i_2] [i_3] [i_3] [i_3]) != (arr_8 [i_1 - 1] [i_2 + 2] [i_2 + 1] [i_4] [i_4]))))) : (min((((/* implicit */unsigned int) 496)), (arr_8 [i_1 - 3] [i_3] [(unsigned short)10] [(signed char)18] [(unsigned char)10]))));
                            arr_13 [(unsigned char)17] [i_1] [(unsigned short)8] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) 10720612795748391839ULL))));
                            var_14 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) ((496) < (((/* implicit */int) (unsigned short)32990))))))))) / (max((max((var_9), (((/* implicit */unsigned long long int) (unsigned char)199)))), (((/* implicit */unsigned long long int) var_8))))));
                            var_15 = ((/* implicit */long long int) ((arr_4 [i_1 + 3] [i_1 - 3]) % ((-(arr_4 [i_1 - 3] [i_1 - 1])))));
                            var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) > (18446744073709551615ULL)))), ((~(((/* implicit */int) (short)-21778))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)5274))));
        }
    }
    for (unsigned short i_5 = 4; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_16 [(unsigned short)19] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((short)-25749), (((/* implicit */short) arr_5 [(signed char)15] [1LL] [i_5 - 1] [i_5]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67))) * (arr_9 [i_5] [(short)15] [(unsigned char)4] [(short)9] [i_5 - 3])))))))) != (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3964)) + (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)60261)) != (-497))))) : (arr_10 [i_5 + 1] [i_5] [i_5 - 4] [i_5] [i_5])))));
        var_18 *= ((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_6 [i_5 - 2] [i_5] [i_5 - 2])))) / (((/* implicit */int) (unsigned char)188)))) % (((/* implicit */int) ((short) min((((/* implicit */unsigned int) arr_5 [(signed char)6] [i_5 - 2] [i_5 + 1] [17ULL])), (1U)))))));
        arr_17 [i_5 - 3] = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))) > (((/* implicit */int) min(((unsigned short)60263), (((/* implicit */unsigned short) var_0))))))) ? ((+(14622951398079638412ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25748)))));
    }
    for (unsigned short i_6 = 4; i_6 < 22; i_6 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_6 - 4]))))) != (((min((((/* implicit */long long int) (signed char)-1)), (-8739405705981685856LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6 - 3] [(short)7] [i_6 - 3] [i_6 - 1] [0U] [9] [i_6 + 1]))))))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (-(arr_15 [i_6]))))))))));
    }
}
