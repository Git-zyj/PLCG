/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80294
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [(short)12] = ((/* implicit */unsigned long long int) ((min((((arr_3 [(unsigned short)15]) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9)))) + (((var_2) ? (arr_3 [i_1]) : (arr_3 [i_0])))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_3 [i_0]))));
                var_15 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) 15922556384736601358ULL)) ? (9223372036854775807LL) : (-2773775647057907738LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_0])) ^ (arr_3 [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_2 - 2])) : (((/* implicit */int) arr_6 [i_2 - 2])))) << (((/* implicit */int) ((2265093650U) <= (2265093641U))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((((/* implicit */int) (short)21605)) % (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) 6487265216574981836ULL)) ? (arr_5 [i_2 + 2] [i_2 + 1]) : (arr_5 [i_2 - 2] [i_2 + 2]))))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_2 - 1])) > ((+(((/* implicit */int) arr_7 [i_3] [11ULL])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) var_2))))) : (min((((((/* implicit */_Bool) 6533464072017726357ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((unsigned long long int) arr_7 [i_2] [i_3]))))));
                    var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_2])) ? (((/* implicit */int) (unsigned short)26448)) : (((/* implicit */int) arr_6 [i_2 + 1]))))) ? (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(short)7] [i_3] [i_2] [i_2 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))))))));
                    arr_12 [i_2] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2 + 3])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) 3710197184U))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (var_1)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [(unsigned short)10] [(unsigned short)10] [i_6] [11LL] [i_6 + 1])), (((arr_8 [i_2 - 2] [i_6 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_2 - 2] [i_6 - 1]))))));
                                arr_18 [i_2] [i_2] [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((arr_9 [i_2] [i_4] [i_5] [i_6]), (((/* implicit */long long int) arr_7 [i_6 - 2] [i_2]))))))) || (((/* implicit */_Bool) ((arr_16 [i_2 - 1] [i_2 + 1] [i_6 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_6 - 2]))))))));
                                arr_19 [i_2] [i_3] [i_6] [i_5] [i_6] [i_4] = ((/* implicit */unsigned short) min((((_Bool) arr_11 [i_2] [i_3] [i_4] [i_2 + 1])), (((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 2] [i_4] [i_2 + 2])) && (var_3)))));
                                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_17 [i_6] [19U] [i_5] [i_4] [7ULL] [i_3] [i_2])) : (((/* implicit */int) var_4))))) ? (((arr_9 [i_2] [i_2] [i_4] [i_5]) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [18ULL])) ^ (((/* implicit */int) max((((/* implicit */short) var_7)), (arr_7 [i_4] [i_6])))))))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3])))))), ((~(((/* implicit */int) arr_14 [i_2 + 3] [(short)3] [i_3] [i_4] [i_2 + 3]))))))) ? (((arr_5 [i_2 + 2] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_3] [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) <= (((/* implicit */int) var_4))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((var_2) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))))) : ((-(var_10)))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) -4778621648617246536LL)) ? (((/* implicit */int) (short)26500)) : (((/* implicit */int) (unsigned char)229)))) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (11913280001691825246ULL) : (((/* implicit */unsigned long long int) 3710197165U))))) ? (9246155705878511166ULL) : (11913280001691825246ULL))) : ((~(((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))));
}
