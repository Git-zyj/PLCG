/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90068
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned int) 435421790));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [(_Bool)1] [i_1 - 1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) arr_3 [i_0 + 3] [i_1] [i_1 + 1]);
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1])) >= ((~(var_8)))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
        {
            arr_19 [(short)4] [i_5] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) max((9164768079148088584LL), (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4 + 3] [i_4] [i_4 + 2] [i_5] [i_5]))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))))))));
            arr_20 [i_4] [(short)6] = ((/* implicit */unsigned short) (~(((unsigned long long int) ((arr_13 [i_4] [i_5]) << (((((/* implicit */int) var_2)) - (54414))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_21 [i_4] [i_4 + 2])) ? (arr_21 [i_6] [i_4 - 2]) : (((/* implicit */int) arr_23 [i_4 + 4] [i_4] [i_4 + 4])))) >= (((/* implicit */int) var_6))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        {
                            arr_31 [i_4] [i_8] &= ((/* implicit */unsigned char) arr_15 [(unsigned short)4]);
                            var_13 = ((long long int) ((((/* implicit */_Bool) (+(arr_22 [i_6])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_26 [i_4] [i_6] [i_7] [7LL] [6LL]))));
                        }
                    } 
                } 
            } 
        }
        var_14 = ((max((((/* implicit */int) arr_12 [i_4 - 1])), (max((((/* implicit */int) (unsigned char)114)), (1015808))))) << (((((/* implicit */_Bool) min((var_4), ((signed char)-69)))) ? (((/* implicit */int) ((_Bool) arr_6 [2U] [i_4 + 2] [i_4] [i_4 + 2]))) : (((/* implicit */int) var_2)))));
    }
    /* LoopSeq 1 */
    for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        arr_36 [7] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((int) arr_32 [i_10] [i_10]))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (arr_33 [i_10] [i_10])))))));
        arr_37 [i_10] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_10] [i_10])) | (((/* implicit */int) arr_34 [i_10]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (arr_35 [(unsigned char)16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [3])))))) : (((unsigned long long int) arr_32 [i_10] [i_10]))))));
        var_15 += ((/* implicit */signed char) arr_35 [i_10]);
        arr_38 [i_10] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_34 [i_10])), (var_2))))) >= (((((var_9) / (arr_33 [(_Bool)1] [i_10]))) >> (min((arr_35 [i_10]), (((/* implicit */unsigned int) (_Bool)1))))))));
    }
}
