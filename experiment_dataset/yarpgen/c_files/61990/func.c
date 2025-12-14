/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61990
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
    var_16 += ((/* implicit */unsigned short) var_8);
    var_17 = ((/* implicit */short) ((6062587338854313561ULL) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7)))) - ((~(var_4)))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)194))), (((/* implicit */unsigned char) var_8))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((max((((/* implicit */unsigned char) var_8)), ((unsigned char)148))), (var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    var_19 &= ((/* implicit */_Bool) min((((unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_3 [i_1 - 3] [i_1 - 1])))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) - (((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */int) var_14)))))))), (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1])), (var_7))))) : (arr_3 [i_0] [i_1 - 1])))));
                }
                for (int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (var_14)));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (((!((!(((/* implicit */_Bool) var_7)))))) ? (var_10) : ((+(arr_8 [i_0] [i_1 - 3] [i_0] [i_1 - 3]))))))));
                    var_22 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3]))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) arr_11 [i_1] [i_4 - 1] [i_4 - 1]);
                                var_24 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) var_7);
                            arr_24 [i_0] [i_0] [i_1 + 2] [i_6] [i_6] [i_1] = 6062587338854313561ULL;
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned int) 2147483647U)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((_Bool) arr_6 [i_1 + 1] [i_0] [i_7 + 1]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        {
                            arr_30 [i_9] [i_1] [i_1] [1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                            arr_31 [i_1] [i_8] = ((/* implicit */unsigned char) (unsigned short)9064);
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (var_13))))));
                            arr_32 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) (unsigned char)148))), (-3607163422648880038LL)));
                            arr_33 [i_0] [i_1] [i_8 + 3] [i_9] = ((/* implicit */unsigned char) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (6062587338854313561ULL)))) ? (((/* implicit */unsigned long long int) ((((unsigned int) var_13)) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_7))))))))) : ((-(max((var_4), (((/* implicit */unsigned long long int) arr_37 [i_10] [(_Bool)1]))))))));
                var_29 ^= min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_11) : (var_13)))) ? (max((((/* implicit */long long int) (unsigned short)56479)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (short)16052))))));
            }
        } 
    } 
}
