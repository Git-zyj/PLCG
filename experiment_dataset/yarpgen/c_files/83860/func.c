/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83860
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) arr_2 [i_1 + 2])))));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    var_20 = max((arr_8 [i_0] [(_Bool)1] [i_1 + 4]), ((((-(arr_7 [i_2 + 1] [i_1 - 1] [i_1 + 4]))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_1 + 2] [i_2])))))));
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_1 + 2])) : (((/* implicit */int) var_0)))) | (((/* implicit */int) min((arr_2 [i_1 + 3]), (((/* implicit */short) var_15)))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_5 [i_1 + 4])) : (((/* implicit */int) ((((/* implicit */_Bool) -2253792991374467069LL)) && (((/* implicit */_Bool) -3414666452612524121LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 4; i_4 < 23; i_4 += 4) 
                    {
                        for (signed char i_5 = 2; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1 + 3] [i_3] [i_4] [i_5 - 2] = ((((long long int) (_Bool)1)) % (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (_Bool)0))))));
                                arr_18 [i_0] [i_1] [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) -580335401828133573LL)))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_14))))) | ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        arr_21 [i_3] [i_0] [i_1] [i_6] = ((((/* implicit */_Bool) (unsigned short)4184)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            arr_25 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_1])) || (((/* implicit */_Bool) (short)32767))));
                            arr_26 [i_0] [i_0] [i_0] [i_1] [i_3] [i_6 + 2] [i_7] = ((/* implicit */unsigned int) (signed char)104);
                            var_24 = arr_8 [(unsigned short)21] [(unsigned short)21] [i_6 + 2];
                            var_25 -= ((/* implicit */unsigned int) -3414666452612524142LL);
                            var_26 = ((/* implicit */unsigned char) min((var_26), (var_10)));
                        }
                    }
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_14))));
                }
                for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 22; i_9 += 1) 
                    {
                        for (signed char i_10 = 2; i_10 < 24; i_10 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_19 [i_0] [i_1 + 4] [i_9]) ? (((/* implicit */int) arr_19 [i_0] [(signed char)20] [i_0])) : (((/* implicit */int) (unsigned char)173))))) ? (((arr_19 [i_8] [i_8] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))) : (-4LL))) : (((/* implicit */long long int) ((unsigned int) var_19))))))));
                                var_29 += ((unsigned short) (unsigned short)52657);
                                arr_34 [i_0] [i_1] [12ULL] [(short)3] [i_0] |= ((/* implicit */int) ((144114638320041984LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))));
                                arr_35 [i_1] [i_1] [i_8] [i_9] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_10])))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) == (8116814169114924406LL))), (((((/* implicit */_Bool) (short)-29723)) && (((/* implicit */_Bool) var_10)))))))) : (var_1)));
                                arr_36 [i_0] [21LL] [i_0] [i_0] = ((/* implicit */signed char) min((((min((0LL), (3414666452612524120LL))) * (min((((/* implicit */long long int) (unsigned char)1)), (arr_20 [i_9 - 1]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-1)), (3135140924U))))));
                            }
                        } 
                    } 
                    arr_37 [i_8] [i_8] [(signed char)2] = ((/* implicit */unsigned int) ((short) ((((var_7) << (((((/* implicit */int) (unsigned char)247)) - (247))))) - (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                }
                var_30 = ((/* implicit */long long int) min(((-(17115134446538629773ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 3634693232U))))))));
                var_31 ^= ((/* implicit */unsigned int) ((580335401828133575LL) - (-580335401828133573LL)));
            }
        } 
    } 
    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) % (580335401828133575LL))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (580335401828133572LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1)))))))) : (((4611686018427387904LL) << (((3971228019U) - (3971228019U)))))));
    var_33 = ((((/* implicit */long long int) ((unsigned int) (_Bool)1))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
}
