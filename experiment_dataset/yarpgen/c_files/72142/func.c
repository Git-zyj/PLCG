/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72142
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (!((!(((((/* implicit */_Bool) arr_1 [(short)15] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-((+(var_11)))))) | (arr_0 [(unsigned short)4])));
        var_19 = ((/* implicit */unsigned short) var_3);
        var_20 = ((/* implicit */unsigned int) ((int) (+(arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_21 &= ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) var_17)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_9))))));
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_2)))) ? (((var_0) + (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))) : ((~(var_0)))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            arr_10 [(short)8] = (-(min((((long long int) var_14)), (((/* implicit */long long int) max((arr_5 [i_2]), (((/* implicit */int) var_4))))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_17))));
        }
        for (int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_4 = 4; i_4 < 8; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_23 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_5 [7U]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_3] [i_5] [i_6]))))) : (max((arr_8 [i_1]), (((/* implicit */long long int) var_2))))))) ? (((/* implicit */int) ((unsigned char) (+(arr_0 [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (arr_8 [i_1]))))))));
                            var_24 = ((/* implicit */unsigned short) max((((long long int) (-(((/* implicit */int) var_9))))), (((/* implicit */long long int) arr_20 [i_1] [i_1] [i_1] [i_4] [i_1]))));
                            var_25 = ((/* implicit */signed char) var_17);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (unsigned short i_8 = 2; i_8 < 6; i_8 += 1) 
                {
                    for (unsigned int i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 2130610186))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_27 [i_7 + 1] [i_8 - 1] [i_9 - 2] [i_8 - 1]))))))));
                            var_27 = ((/* implicit */int) min((var_27), (var_17)));
                            var_28 ^= (-((-(((/* implicit */int) ((unsigned char) (short)4825))))));
                            arr_30 [i_9] [i_9] [i_9] [i_9] [i_9 - 2] [i_9 - 1] [2LL] = ((/* implicit */int) var_0);
                        }
                    } 
                } 
            } 
        }
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_13))) ? (min((((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) == (min((-8278976762896164938LL), (((/* implicit */long long int) (unsigned short)65535))))))))));
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            {
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_10] [i_11])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10])))))) ? (max((var_0), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */int) arr_32 [i_10])) : (var_17))))))) ? (((/* implicit */int) var_9)) : ((((((-(((/* implicit */int) arr_31 [i_10])))) + (2147483647))) >> (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)27677))))))));
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_17))));
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)25716)))))));
                arr_35 [i_10] [i_10] = (-(((/* implicit */int) (short)-27698)));
            }
        } 
    } 
}
