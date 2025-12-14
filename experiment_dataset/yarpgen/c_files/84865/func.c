/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84865
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) var_0);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_1 - 3]))));
                        arr_12 [i_0] [i_1] [i_2 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_2]);
                        arr_13 [i_3] [i_2 - 1] [i_2] [(signed char)13] [i_0] [i_0] = ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_1] [(signed char)8]);
                        arr_14 [i_0] [6] [6] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(var_9)))) >> (((((((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))) : (var_3))) - (151ULL)))));
                    }
                } 
            } 
            var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)254))));
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-69))));
                var_17 = ((((((/* implicit */int) var_11)) * (((/* implicit */int) var_11)))) ^ (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_6 [16U] [i_0]))))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_13))));
                arr_18 [i_4] = ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((((int) -2820834609155648107LL)) - (1327912331))));
                arr_19 [i_0] [i_1] = ((/* implicit */long long int) (signed char)85);
            }
            for (signed char i_5 = 2; i_5 < 16; i_5 += 4) 
            {
                var_19 = ((/* implicit */long long int) ((unsigned long long int) arr_20 [i_5 - 1] [i_1 - 2] [i_1 + 1]));
                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
            }
            for (short i_6 = 3; i_6 < 14; i_6 += 1) 
            {
                arr_25 [i_0] [i_1] [(_Bool)1] [i_6] = ((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1] [i_1]);
                var_21 *= ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_6 + 2])) / (((/* implicit */int) arr_21 [i_1] [i_1] [i_6 - 3] [(unsigned short)9]))));
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                for (unsigned short i_8 = 3; i_8 < 16; i_8 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_4))));
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 1; i_9 < 16; i_9 += 2) 
                        {
                            arr_33 [i_9] [(unsigned short)1] [3U] [(short)16] [i_1] [i_9] = (-(var_4));
                            var_23 = (i_9 % 2 == zero) ? (((/* implicit */unsigned short) (((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((/* implicit */int) arr_31 [i_1] [i_9] [i_1 - 1] [i_1] [i_7] [i_8 - 3] [i_8]))))) : (((/* implicit */unsigned short) (((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((((/* implicit */int) arr_31 [i_1] [i_9] [i_1 - 1] [i_1] [i_7] [i_8 - 3] [i_8])) - (1))))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((int) arr_1 [i_8 - 1])))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_21 [i_0] [i_7 + 1] [i_8] [i_0]))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0] [i_1 - 3] [i_7 + 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_7 + 3])))));
                        }
                        for (signed char i_11 = 1; i_11 < 14; i_11 += 2) 
                        {
                            arr_39 [i_11] = ((/* implicit */unsigned char) (~(((int) arr_8 [i_0] [i_1] [i_7 + 2]))));
                            arr_40 [i_11] = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_1 [i_0])))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((unsigned char) arr_29 [(unsigned char)11] [i_11] [i_11 - 1] [(unsigned char)11])))));
                        }
                    }
                } 
            } 
        }
        arr_41 [i_0] [5ULL] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) && (var_11)))) % (((/* implicit */int) var_6))));
        var_28 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)255)))) % (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 1) 
    {
        var_29 &= ((/* implicit */short) max((((unsigned int) ((unsigned int) var_5))), (((/* implicit */unsigned int) var_13))));
        arr_44 [i_12] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_12] [i_12] [i_12 - 1] [i_12])) : (((/* implicit */int) arr_11 [i_12] [15LL] [i_12 + 1] [i_12])))));
        arr_45 [i_12 - 3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((63LL) < (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_12 + 1]))))))) > (((((/* implicit */_Bool) arr_42 [i_12 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_12 + 1]))) : (70LL)))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [(signed char)3] [i_12 - 3] [i_12 - 2] [i_12]))))) >> (((arr_5 [i_12 + 1] [i_12 + 1] [i_12 + 1]) - (6245701007659363964ULL)))));
        arr_46 [i_12] = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) (unsigned short)8191)));
    }
    var_31 += ((/* implicit */unsigned char) ((long long int) var_9));
}
