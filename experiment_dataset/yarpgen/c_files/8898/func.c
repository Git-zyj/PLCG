/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8898
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
    var_12 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (unsigned short)22)), (((((/* implicit */_Bool) 8646911284551352320LL)) ? (((/* implicit */int) var_5)) : (var_2)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_0 [i_0 + 2])))) | (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((signed char) (short)19713))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-512))))))));
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) 5))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) && (((((/* implicit */_Bool) (short)-512)) || ((!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_15 = ((((/* implicit */int) arr_3 [9])) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_6 [4] [i_1])) : (((/* implicit */int) arr_8 [4ULL] [i_1] [i_1] [i_1] [(unsigned char)4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (3445767255U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_3]))))))) - (77U))));
                            var_16 &= ((/* implicit */int) arr_2 [i_0]);
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [5] [i_0 + 3]))))) : (((int) arr_7 [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                var_18 = ((/* implicit */int) (_Bool)1);
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) 11563448273059264935ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_19 [i_6] [(_Bool)1] [i_6])))) / (((unsigned long long int) arr_3 [i_4])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843009213431808ULL)) ? (((/* implicit */int) (short)501)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((unsigned long long int) 1790066882U)))))))));
                        var_21 = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) arr_3 [i_7])) || (((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_6])))) && (((((/* implicit */_Bool) arr_0 [i_4])) && ((_Bool)1))))));
                        var_22 *= ((/* implicit */short) (~(((6286973650901769776ULL) ^ (((/* implicit */unsigned long long int) arr_17 [i_4] [i_5] [i_6] [i_5] [i_4]))))));
                    }
                    var_23 = ((/* implicit */unsigned int) arr_2 [i_4]);
                }
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */_Bool) (~(0LL)));
                    var_25 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_4] [(short)6] [(unsigned char)1]))))), (max((arr_14 [i_4] [i_4] [i_8] [i_8]), (((/* implicit */unsigned long long int) (_Bool)1)))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) 849200041U);
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_17 [i_4] [i_4] [i_9] [i_9] [i_4]), (((/* implicit */unsigned int) arr_22 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_17 [12ULL] [12ULL] [i_4] [i_5] [i_5])) ? (((/* implicit */long long int) -10)) : (arr_5 [i_4] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)10487))))))));
                    var_28 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_4] [i_5]))));
                }
                var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(1480570398)))) ^ (arr_13 [i_4] [i_5] [i_5])))), (arr_14 [i_4] [i_4] [i_5] [i_4])));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (short i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_5]))))))))))));
                            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_8 [i_10] [i_5] [i_11] [i_5] [i_5]))))))));
                            /* LoopSeq 1 */
                            for (long long int i_12 = 3; i_12 < 11; i_12 += 3) 
                            {
                                arr_32 [i_12] [i_11] [i_10] [i_5] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4])) && (((/* implicit */_Bool) arr_9 [i_4] [i_5])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3445767274U))))) : (-262144)));
                                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (_Bool)1))));
                                var_33 -= ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_11 + 2] [i_5] [i_10]))) ? (((((/* implicit */_Bool) arr_23 [i_4] [i_12 + 1] [i_11 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_10] [i_12 + 3] [i_11 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_4] [i_5] [i_10] [i_10] [i_12 + 1])))));
                            }
                            var_34 = ((/* implicit */signed char) arr_1 [i_4]);
                        }
                    } 
                } 
                var_35 -= ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) arr_0 [13])) ? (3485231507U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
