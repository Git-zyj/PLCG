/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91161
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_10 += ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                            var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(arr_0 [(signed char)4])))) % (((((/* implicit */_Bool) 7144684930993997793LL)) ? (arr_10 [i_1] [i_3 + 1] [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (+(min((((/* implicit */int) arr_4 [i_3 + 1])), (548230591))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_13 = ((/* implicit */unsigned char) (-((((~(12ULL))) & (((/* implicit */unsigned long long int) ((arr_13 [1LL] [i_1] [i_1] [(_Bool)1]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_0 [i_1 + 1])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((unsigned short) (unsigned short)25)))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_8 [i_5] [i_1] [i_1]), (((/* implicit */unsigned long long int) (signed char)12)))), (((((/* implicit */_Bool) (short)32767)) ? (2877202126989570199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) <= (max((((/* implicit */unsigned long long int) -548230592)), (16486623553087689029ULL))))))) : (((unsigned long long int) arr_4 [i_5]))));
                        arr_17 [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) + ((-(var_4)))))));
                    }
                    var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_3 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned char) (_Bool)1)))))));
                }
                for (short i_6 = 3; i_6 < 9; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        for (int i_8 = 2; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_25 [i_0] [(unsigned short)2] [(unsigned short)3] [i_6 + 3] [i_6 + 3] [i_1] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)1)), (min((arr_13 [(signed char)6] [(signed char)6] [i_1] [(_Bool)1]), (((((/* implicit */long long int) -548230575)) + (var_9)))))));
                                arr_26 [i_1] [i_1] [i_6 + 2] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */unsigned int) arr_22 [(unsigned short)1] [(_Bool)1] [i_6] [i_6] [i_6] [4U]);
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_20 [i_6] [i_1] [i_1] [i_6])))) ? ((~(var_2))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [(signed char)2] [(signed char)2]))))))) ? (((/* implicit */int) (signed char)-1)) : (min((var_0), (((/* implicit */int) (short)-29720)))));
                }
                arr_27 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_1 + 2]))) % ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65510))) : (2135053189U))))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)178)))))))) <= (min((3639024842U), (((/* implicit */unsigned int) (unsigned short)15122))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((((/* implicit */int) (signed char)85)) != (((/* implicit */int) var_5))))))), ((~((~(13868416421577339101ULL))))))))));
}
