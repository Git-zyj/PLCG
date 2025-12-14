/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70914
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_3 [i_0])))));
        var_20 = ((/* implicit */unsigned int) ((var_16) * (max((((/* implicit */int) min(((_Bool)0), ((_Bool)0)))), ((((_Bool)1) ? (((/* implicit */int) arr_2 [(unsigned short)7])) : (((/* implicit */int) (unsigned char)42))))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)23507)) : (((/* implicit */int) arr_2 [i_0])))))))));
        var_22 *= ((/* implicit */_Bool) (~(max((((unsigned int) arr_1 [i_0])), (((/* implicit */unsigned int) var_4))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_23 = ((/* implicit */int) (unsigned char)21);
                        arr_10 [i_0] [i_1] = ((/* implicit */_Bool) (-(1955357171U)));
                        var_24 = ((/* implicit */_Bool) arr_7 [i_3]);
                        var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        var_26 = (signed char)60;
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        var_27 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((unsigned char)124), (((/* implicit */unsigned char) (_Bool)1))))) ? (13174157712164602834ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4]))));
        arr_13 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_12 [i_4]), (((/* implicit */long long int) -2112221182))))) ? (max((arr_12 [i_4]), (arr_12 [i_4]))) : (arr_12 [i_4])));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_11))));
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) arr_6 [0] [i_6 + 1] [i_7] [(unsigned char)12]);
                                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((unsigned short) max(((unsigned short)35491), (((/* implicit */unsigned short) arr_14 [(unsigned char)13] [(unsigned char)13]))))))));
                                var_31 = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) ((short) (_Bool)1))))));
                                arr_28 [i_9] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */short) arr_19 [i_5] [i_5] [i_7]);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (_Bool)0))));
                }
            } 
        } 
        arr_29 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_11 [i_5] [i_5]), ((_Bool)1))))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((arr_30 [i_10]) / (arr_31 [(short)19] [i_10]))))));
        arr_32 [(short)19] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (signed char)-119)) / (1166045100)))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_13] [i_12] [(unsigned short)4] [i_10])) ? (((/* implicit */int) ((short) 1955357171U))) : (((((/* implicit */int) (short)-16579)) - (((/* implicit */int) (signed char)3))))));
                        var_35 -= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)8182)) : (-1054077777)));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10])) ? (arr_30 [i_10]) : (((/* implicit */int) arr_35 [i_10] [i_10]))));
    }
    var_37 = ((/* implicit */long long int) (_Bool)1);
}
