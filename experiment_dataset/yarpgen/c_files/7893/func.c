/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7893
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21983)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-9223372036854775807LL - 1LL)))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)21983)) ? (((((/* implicit */int) var_0)) - (arr_1 [i_1] [(unsigned char)20]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)(-127 - 1))))))) ^ ((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))) > (min((var_14), (var_10)))))) != ((~(((((/* implicit */_Bool) 1153123251760066098LL)) ? (((/* implicit */int) var_2)) : (-174316158)))))));
                    var_18 = ((/* implicit */short) (unsigned short)43553);
                    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((int) (unsigned short)65520)) != (((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (short)-3914))))))), (max((arr_2 [i_0 - 1]), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((9962500411208220040ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((var_9) - (((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_2])))) : (arr_2 [i_0 - 1]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 0U))))) != (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21983))) : (var_5)))))))));
                    var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)1787)) : (((/* implicit */int) (unsigned short)63762))))) >= (((arr_2 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6256635566566988878ULL)) ? (((/* implicit */int) arr_4 [i_0] [14] [i_2])) : (((/* implicit */int) var_4))))), ((~(3597823296098432174ULL))))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) ((-2147483647) % (((/* implicit */int) (unsigned char)251))));
                    var_23 = ((/* implicit */int) ((unsigned char) arr_8 [i_0 + 1] [i_0 - 1] [i_3] [i_3]));
                }
                for (signed char i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                {
                    arr_14 [i_4] [i_4] [i_4] = ((/* implicit */short) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3597823296098432180ULL))))) != (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) > (((/* implicit */int) var_4))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) (unsigned short)1920);
                        arr_19 [i_0] [(unsigned short)14] [i_4] = ((/* implicit */unsigned short) ((2147483647) > (((/* implicit */int) max((arr_17 [i_5] [i_4] [i_0 + 1] [i_0 - 1] [i_0 - 1]), (arr_17 [i_0 + 1] [(unsigned char)3] [i_0 + 1] [i_0 + 2] [14U]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)1784)))) > (max((((/* implicit */unsigned long long int) -1153123251760066068LL)), (0ULL)))));
                        arr_23 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */short) (~(430913931076903451ULL)));
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((3270045575U), (((/* implicit */unsigned int) arr_3 [i_1])))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)247))))))))));
                    }
                }
                for (signed char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                {
                    var_27 = min((((/* implicit */unsigned short) ((11538087982641006793ULL) == (max((17829503339362623863ULL), (((/* implicit */unsigned long long int) -649699746))))))), (arr_17 [i_0] [i_1] [i_1] [i_1] [i_1]));
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1455529409U)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_8)))) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : ((~(((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]))))));
                    var_29 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9962500411208220033ULL)) ? (((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_0 - 1] [i_7])) : (((/* implicit */int) var_6))))), (min((var_14), (((/* implicit */unsigned long long int) arr_6 [i_0]))))));
                }
            }
        } 
    } 
}
