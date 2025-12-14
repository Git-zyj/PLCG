/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90452
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
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) ((_Bool) ((arr_2 [i_0 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0 - 1])))) : ((+(var_7))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_1] = min((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 - 1]))), (max((arr_0 [i_0 + 2]), (((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 - 2])))));
                            arr_10 [i_0] [i_0] [i_0] [0U] = ((/* implicit */unsigned short) (~(max((arr_8 [i_1 + 3] [i_1 + 3] [2] [i_1 + 2]), (((/* implicit */unsigned long long int) var_2))))));
                            arr_11 [i_1] [i_1] [i_0] [i_1 - 1] = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned long long int) (unsigned char)210)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)255)), (8545442388900560607LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(signed char)5] [i_0] [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [(signed char)4] [i_3] [i_3])))))));
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0 - 3] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (int i_6 = 2; i_6 < 14; i_6 += 1) 
            {
                {
                    var_11 -= ((/* implicit */long long int) arr_13 [i_4]);
                    arr_22 [i_4] [i_5] = ((/* implicit */short) (+(((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_6 + 3])) || (((/* implicit */_Bool) (unsigned char)255))))) << (((var_7) - (8478481569112663760ULL)))))));
                    arr_23 [i_4] [i_5] [i_4] = ((/* implicit */int) ((_Bool) max((min((arr_19 [i_4] [16U] [9] [i_4]), (((/* implicit */unsigned char) var_4)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)27))))))));
                    arr_24 [i_4] [(unsigned char)1] [i_6 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3331855526U)) ? (-163292563970961679LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)14))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_4])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))) : ((-(963111752U)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_27 [i_7] [i_4] |= ((((unsigned int) arr_21 [0] [i_5] [i_7])) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))));
                        var_12 = arr_14 [i_4];
                        arr_28 [i_4] [11LL] [i_4] [8] = ((/* implicit */unsigned long long int) ((((var_2) << (((/* implicit */int) var_0)))) == (((/* implicit */unsigned int) (~(arr_16 [(signed char)1] [i_5]))))));
                        arr_29 [i_4] [i_7] = ((/* implicit */unsigned char) ((_Bool) arr_19 [i_4] [i_5] [i_6 + 1] [i_4]));
                    }
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_4] [i_5] [i_5] [i_4])) * (((/* implicit */int) max((arr_17 [i_4]), (((/* implicit */signed char) ((((/* implicit */int) arr_13 [(unsigned char)8])) == (((/* implicit */int) var_9))))))))));
                        arr_32 [(unsigned char)0] [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((-163292563970961679LL), (((/* implicit */long long int) arr_15 [i_4])))), (((long long int) 2424742605U))))) ? (((/* implicit */int) ((signed char) var_4))) : (2147483647)));
                        arr_33 [i_4] [i_4] [i_4] = ((/* implicit */int) arr_20 [i_4] [i_5] [i_6]);
                        var_14 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (1383476938U)));
                    }
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
}
