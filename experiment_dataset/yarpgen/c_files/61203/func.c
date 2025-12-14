/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61203
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) var_5);
        var_14 = ((/* implicit */signed char) arr_0 [i_0]);
        arr_2 [(unsigned char)2] |= ((/* implicit */unsigned char) arr_1 [(unsigned char)4]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_0] [i_1]))));
                    var_16 -= ((/* implicit */unsigned char) ((unsigned long long int) arr_7 [i_1] [i_1]));
                    var_17 += ((/* implicit */signed char) ((unsigned int) var_11));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) var_8);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((6989945507606706987LL) == (((/* implicit */long long int) 488512426))))) ^ (((/* implicit */int) arr_3 [i_4]))));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [21] = ((/* implicit */signed char) ((unsigned short) (unsigned short)17730));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned char) (_Bool)1)))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1903901563)) && (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
        arr_16 [i_5] = var_6;
    }
    var_23 = max((var_12), (((/* implicit */unsigned int) var_5)));
    /* LoopSeq 3 */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6989945507606706998LL)) ? (-1802237490) : (((/* implicit */int) (unsigned short)3838))))))))));
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (unsigned short i_8 = 3; i_8 < 13; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    {
                        arr_27 [i_6] [i_7] [i_8 - 1] [i_8 - 1] [i_9] = ((/* implicit */int) arr_3 [i_7]);
                        var_25 = ((/* implicit */_Bool) min((((((var_9) & (arr_23 [i_6] [i_6] [i_6]))) - (((/* implicit */int) ((((/* implicit */int) (signed char)-63)) <= (((/* implicit */int) (unsigned short)37257))))))), ((-(((/* implicit */int) arr_4 [i_6] [i_8 + 2]))))));
                    }
                } 
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 3; i_11 < 11; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    {
                        arr_39 [i_11] [i_11] [i_11] [2U] = ((/* implicit */_Bool) max((((/* implicit */long long int) min(((-(((/* implicit */int) arr_21 [i_10] [(unsigned short)10] [i_10] [(unsigned short)10])))), (((/* implicit */int) ((unsigned char) var_3)))))), (((((/* implicit */_Bool) (-(610003355)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) - (-1515964019341091766LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))))));
                        arr_40 [(signed char)5] [i_11] [i_11 - 2] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_7 [i_10] [i_11 - 1]), ((signed char)-124)))) == ((~(((/* implicit */int) arr_14 [i_10] [i_10]))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_7 [i_10] [i_10]))));
    }
    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        var_27 = ((/* implicit */signed char) max(((-(((/* implicit */int) min((((/* implicit */short) var_3)), ((short)-7359)))))), (((((((/* implicit */_Bool) arr_1 [14LL])) && (((/* implicit */_Bool) arr_12 [i_14] [i_14] [i_14] [i_14] [i_14] [8ULL] [i_14])))) ? (((/* implicit */int) arr_4 [i_14] [i_14])) : (((/* implicit */int) max(((signed char)62), (var_1))))))));
        var_28 = ((/* implicit */int) var_8);
    }
}
