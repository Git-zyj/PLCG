/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66358
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
    var_17 = var_8;
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned int) min((var_8), (var_16)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) var_14);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) >> ((((+(-307746531))) + (307746561)))));
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)127)), ((short)-10343)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0 - 1] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)78);
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) min((arr_1 [i_1] [i_1]), (((/* implicit */long long int) arr_0 [i_1 + 1] [i_1 + 1]))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) (+(16777200ULL)));
            var_23 = ((/* implicit */unsigned short) ((short) (signed char)-111));
            var_24 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)88)) : (arr_0 [i_1] [i_1])))));
            /* LoopSeq 3 */
            for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                arr_11 [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) == (var_12))))) / (((2603330633160885507ULL) + (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]))))));
                var_26 = ((/* implicit */unsigned char) var_2);
                var_27 = ((/* implicit */unsigned char) 4602678819172646912ULL);
            }
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
            {
                arr_14 [i_1] = var_4;
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [i_1 + 1]))));
            }
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
            {
                arr_17 [i_1] [i_1] = ((/* implicit */int) arr_1 [i_1] [i_1]);
                var_29 = ((/* implicit */unsigned char) (short)32767);
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1] [i_5])) && (((/* implicit */_Bool) (+(arr_10 [i_1]))))));
                /* LoopSeq 1 */
                for (int i_6 = 1; i_6 < 20; i_6 += 3) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) arr_22 [i_2] [i_2 + 1] [i_5] [i_7] [i_5]))));
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(268434432)));
                        arr_24 [i_1] [i_5] [i_7] = ((/* implicit */unsigned char) (-(arr_19 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2])));
                    }
                    for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                        var_33 = ((/* implicit */signed char) ((arr_13 [i_1 + 1] [i_2 + 1] [i_5] [i_1]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-32766))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((long long int) var_14)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6 + 1] [i_5]))))))));
                        var_35 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (short)32765)))));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */short) ((arr_8 [i_1] [i_1] [i_1] [i_2 + 1]) <= (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) : (61572651155456LL))))));
                        var_37 = ((/* implicit */short) (~(((/* implicit */int) arr_21 [i_10] [i_10]))));
                    }
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-120)) && (((((/* implicit */int) var_11)) == (((/* implicit */int) (unsigned short)37705))))));
                    arr_34 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) / (var_4)))));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(var_8)))) != (((((/* implicit */_Bool) (unsigned char)0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                }
            }
            var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_37 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_1 - 1] [i_1 + 1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [10LL] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_36 [i_1 - 1] [i_1 + 1])), (4611685880988434432LL))))));
            arr_38 [i_1] [i_1] = ((/* implicit */long long int) (signed char)-95);
        }
        for (signed char i_12 = 1; i_12 < 19; i_12 += 1) 
        {
            arr_41 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) max((arr_35 [i_12]), (((/* implicit */signed char) arr_21 [i_12] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_12] [i_1] [i_12])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (_Bool)1))))))))));
            var_41 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_39 [i_1 - 1])))))));
            var_42 = ((/* implicit */signed char) var_9);
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_16 [i_1 + 1] [i_1])) % (arr_25 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_13])));
            arr_45 [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_13]);
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6259)))))) && (((61572651155442LL) >= (((/* implicit */long long int) -910992251))))));
        }
        var_45 = ((/* implicit */unsigned char) var_12);
    }
}
