/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58933
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
    var_18 = ((/* implicit */_Bool) ((signed char) ((int) 9937782961401153723ULL)));
    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-10943)))))));
            arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 2])) * (((/* implicit */int) (unsigned char)248))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_5 [i_0] [i_0])))) ? (((unsigned long long int) arr_0 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)-11712)))))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */unsigned long long int) 4276735552009444033LL)) : (arr_4 [(unsigned short)0] [i_0] [i_0]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (131166095528797951ULL)))));
            arr_12 [i_0] [i_2] [(unsigned short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (signed char)-88))) <= (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [7ULL] [i_2]))))));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_9 [i_0] [i_2] [i_2])));
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0]))));
            arr_16 [i_0] = ((/* implicit */unsigned short) ((((int) arr_11 [(unsigned short)5] [i_3] [(short)6])) == (((/* implicit */int) (short)-4381))));
            var_22 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) -2147483642)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1766389291))))))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) arr_10 [i_0] [i_4] [i_0]);
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                arr_22 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) ((int) arr_5 [i_4] [i_4]));
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 8; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_4] [i_6] [i_7] [i_4] [i_5] = ((/* implicit */unsigned int) ((((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) >> (((((unsigned int) ((unsigned char) arr_9 [i_0] [i_0] [i_5]))) - (137U)))));
                            arr_28 [i_5] [i_4] [i_5] [i_6] [i_0] = ((/* implicit */_Bool) arr_21 [i_7]);
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_24 = ((/* implicit */_Bool) arr_29 [(unsigned char)6] [(short)9] [i_8] [8LL]);
                arr_31 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0])) + (((((/* implicit */_Bool) min((arr_30 [i_0] [i_0] [i_8] [i_0]), (((/* implicit */unsigned int) (signed char)88))))) ? (((/* implicit */int) ((short) arr_30 [i_0] [i_8] [i_0] [i_8]))) : (((/* implicit */int) arr_18 [i_0] [0U] [i_0]))))));
                arr_32 [i_0] [3ULL] [i_4] = ((/* implicit */unsigned long long int) min(((~(arr_5 [i_8] [i_4]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0])))))));
                arr_33 [i_0] [i_0] [i_8] = ((/* implicit */int) ((signed char) 5309353980281161210LL));
                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((arr_20 [i_0] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [(_Bool)1] [i_0] [i_8]))))))));
            }
            for (int i_9 = 2; i_9 < 7; i_9 += 2) 
            {
                arr_36 [i_9] [i_9] [i_0] = ((/* implicit */unsigned int) (unsigned char)182);
                arr_37 [i_0] [i_4] [5U] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (short)4383)) == (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1669593993U)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (short)-4381))))))));
            }
        }
        arr_38 [i_0] [i_0] = ((/* implicit */_Bool) (+(1766389291)));
    }
}
