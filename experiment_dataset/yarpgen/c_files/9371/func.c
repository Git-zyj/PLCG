/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9371
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) -9155997955454458910LL)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0] [(signed char)0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0]))))) ? (arr_0 [i_0]) : (((((((/* implicit */int) var_16)) + (2147483647))) >> (((((/* implicit */int) var_17)) - (54)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_1 - 1])) : (((/* implicit */int) var_18)))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                var_21 = ((/* implicit */unsigned char) -9155997955454458915LL);
                                var_22 = ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_1] [i_2] [i_1 - 1])) != (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1 - 1]))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)51982)) + (((/* implicit */int) (short)22387))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (2ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32256)))))));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_14))));
                            }
                            for (signed char i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                            {
                                arr_21 [i_2] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_5 [11LL] [i_3] [i_1] [i_0])))) ? (((long long int) 1458067720)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)0)))))));
                                var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1]))) : (9155997955454458909LL))), (((/* implicit */long long int) ((signed char) arr_9 [i_1 + 1] [i_1 - 1])))));
                                var_27 = ((/* implicit */signed char) -9155997955454458910LL);
                                var_28 -= ((/* implicit */signed char) (-(var_12)));
                            }
                            for (signed char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                            {
                                arr_24 [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) ((arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1]) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-18111)) : (((/* implicit */int) (unsigned short)22335)))))));
                                arr_25 [i_7] [i_3] [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */short) ((signed char) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1]))), (arr_15 [i_7] [i_2])));
                            }
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)25)) ? (9155997955454458910LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) -9155997955454458910LL)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (signed char)-120))))))))));
            }
        } 
    } 
    var_30 = ((short) ((signed char) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))))));
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            {
                arr_31 [i_8] = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) arr_27 [i_8]))), (var_2)));
                arr_32 [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) arr_30 [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) min((var_3), (var_15)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3)))))))), ((-(max((var_7), (((/* implicit */long long int) arr_29 [(signed char)4] [i_9] [i_9]))))))));
                var_31 = ((/* implicit */signed char) arr_27 [i_8]);
                arr_33 [i_9] = max((max((arr_26 [i_8] [(_Bool)1]), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (signed char)-105)));
            }
        } 
    } 
}
