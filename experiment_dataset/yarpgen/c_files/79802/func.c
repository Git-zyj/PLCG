/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79802
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
    var_11 = ((/* implicit */unsigned short) (+(var_6)));
    var_12 -= ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)249))))) ? (7856964895868902779ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))));
            var_14 -= ((arr_4 [i_0] [i_0]) - (arr_4 [i_0] [i_0]));
            var_15 = ((/* implicit */signed char) var_2);
            var_16 = 1278799307;
        }
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_6 [i_2] [i_0]) : (((/* implicit */int) (short)32767)))));
            var_18 = (unsigned short)33560;
            var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_0]))));
            var_20 = ((((/* implicit */unsigned long long int) var_3)) | (((((/* implicit */_Bool) (signed char)-1)) ? (7856964895868902779ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))));
            arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) % (((((/* implicit */int) (unsigned short)65522)) & (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        }
        for (short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_21 = ((/* implicit */_Bool) var_0);
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 4) 
            {
                arr_15 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (short)-17052);
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_23 = ((/* implicit */short) (+(arr_9 [i_0] [i_0] [i_4 - 3])));
                    var_24 = (-(arr_11 [i_4 + 2] [i_4 - 3]));
                    var_25 = ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) ((unsigned short) var_0))));
                    arr_19 [i_0] [i_3] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */short) arr_10 [i_4] [i_3]);
                }
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_3] [i_6] [i_4 - 1] [i_6]))));
                    var_27 = ((/* implicit */short) ((int) (unsigned char)204));
                    var_28 = ((/* implicit */int) ((unsigned char) (short)-17052));
                    arr_22 [i_0] [i_3] [i_3] [i_3] = (+(((/* implicit */int) (short)1417)));
                }
                for (signed char i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    arr_25 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (short)-17051);
                    var_29 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_10 [i_0] [i_7 + 1]))))));
                }
                var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)6767))))) ? ((~(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0])))) : (((/* implicit */int) arr_21 [i_3] [i_4 - 3] [i_4] [i_4]))));
                var_31 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])))));
                var_32 = ((/* implicit */unsigned char) (signed char)112);
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_30 [i_0] [i_8] = (unsigned short)31958;
            var_33 -= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_4)))) ^ (arr_27 [i_0])));
            /* LoopSeq 2 */
            for (short i_9 = 2; i_9 < 15; i_9 += 4) 
            {
                var_34 = ((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 - 2])))));
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((int) var_9)))));
                            arr_40 [i_0] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) var_10);
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_5 [i_9 - 2] [i_10 + 1] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754)))));
                        }
                    } 
                } 
                var_37 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_9] [i_9] [i_9] [i_9 - 1] [i_9])) >> (((var_8) + (209071044)))));
            }
            for (short i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 13; i_13 += 4) 
                {
                    for (int i_14 = 1; i_14 < 15; i_14 += 3) 
                    {
                        {
                            arr_50 [i_0] [i_12] [i_12] [i_13 - 1] [i_14] [i_14] = ((/* implicit */short) (~(var_1)));
                            var_38 -= ((/* implicit */unsigned char) var_4);
                            arr_51 [i_0] [i_8] [i_0] [i_13] [i_13 - 2] [i_12] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)17050)) : (var_6));
                            var_39 = ((/* implicit */long long int) ((unsigned long long int) arr_28 [i_13 + 2] [i_13 + 2] [i_14 + 1]));
                        }
                    } 
                } 
                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_8] [i_12])) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))));
                var_41 = ((/* implicit */int) (-(((((/* implicit */_Bool) (short)-27263)) ? (arr_26 [i_0] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36971)))))));
            }
        }
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            var_42 += ((/* implicit */unsigned short) (~(var_0)));
            arr_54 [i_15] = ((/* implicit */signed char) ((arr_13 [i_0]) ? (((/* implicit */int) (short)-8074)) : (arr_42 [i_0] [i_0] [i_0])));
        }
        arr_55 [i_0] [i_0] |= ((/* implicit */unsigned int) (+((-2147483647 - 1))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_60 [i_16] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_58 [i_16])) ? (((/* implicit */int) arr_58 [i_16])) : (((/* implicit */int) (short)-17036))))));
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 2387189956U)) <= (7499458867207906366ULL)))) << (((((/* implicit */int) arr_56 [i_16])) - (64)))));
    }
    var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)116))));
}
