/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75679
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
    var_11 = ((/* implicit */unsigned char) ((short) -6771642725106720289LL));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] = ((/* implicit */signed char) ((((_Bool) min((((/* implicit */unsigned int) -63046084)), (2147483648U)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3447646593U)) ? (1610475530U) : (arr_14 [(unsigned short)1] [(unsigned short)2] [(unsigned short)1] [(unsigned short)1] [1ULL] [(unsigned short)2] [4LL])))) : ((+(var_10))))) : (((/* implicit */unsigned long long int) 3220393067U))));
                                arr_16 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) var_2);
                                arr_17 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_11 [(signed char)9] [i_2 - 1] [i_3 + 1] [4U] [4U] [(signed char)2]))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_2 - 1] [i_3 - 4] [i_3 - 2] [(signed char)7] [i_0])) ? (((/* implicit */unsigned long long int) 2147483639U)) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [1LL] [i_2 - 1] [i_3 - 4] [i_3 - 4] [i_3 - 4] [2ULL]) == (arr_11 [i_0] [i_2 - 1] [i_3 - 3] [(signed char)0] [i_4] [(short)9])))))));
                                var_12 *= (+(min((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) | (2147483658U))), (2147483623U))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */signed char) (+(var_5)));
                        arr_21 [i_0] [i_2] = (+((((!(((/* implicit */_Bool) 2147483639U)))) ? (var_5) : (min((((/* implicit */unsigned int) arr_3 [i_5])), (var_5))))));
                        arr_22 [i_2] [i_2] [i_2] [(unsigned short)6] = (+(arr_14 [(signed char)6] [i_0] [(signed char)6] [7] [4U] [(signed char)4] [i_5]));
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                        {
                            arr_29 [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) ((short) ((2147483637U) <= (((((/* implicit */_Bool) 3220393048U)) ? (2147483657U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                            var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((int) arr_12 [i_7] [i_2] [i_2] [i_0]))))), ((-(((((/* implicit */_Bool) 0ULL)) ? (2147483659U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190)))))))));
                            var_15 ^= ((/* implicit */long long int) 2147483647U);
                            arr_30 [i_1] [6LL] [i_2] [0U] [0U] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned short) arr_14 [i_0] [i_0] [(signed char)5] [5] [2ULL] [0U] [i_0])), (((/* implicit */unsigned short) arr_6 [i_7 + 1] [i_7 - 1] [i_7 + 1]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3931286354U)) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) arr_9 [(unsigned short)9] [i_1]))))), (((unsigned long long int) arr_13 [(unsigned short)8] [i_1])))) : (((/* implicit */unsigned long long int) 3220393070U))));
                            var_16 = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) 2969731447U)) ? (var_3) : (((/* implicit */unsigned long long int) 2147483645U)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_25 [i_1] [i_1] [i_1] [i_7])), (2147483639U)))))), ((~(18446744073709551615ULL)))));
                        }
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)216)), (var_2)))), ((~(5276422139019353334ULL)))))))));
                        arr_31 [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) 2147483656U)), (min((10076809849066896380ULL), (((/* implicit */unsigned long long int) 4225610951U)))))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_9)), (2147483638U))))))));
                        arr_32 [i_2] [i_2] = ((/* implicit */unsigned long long int) 4225610948U);
                    }
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_18 &= ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                        var_19 = ((/* implicit */unsigned int) var_3);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        arr_37 [9ULL] [i_2] [i_2] [0U] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)160)), (((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6053)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)68)) >= (((/* implicit */int) (_Bool)1))))) >> (((((unsigned long long int) var_2)) - (18446744073709530767ULL)))))) : (((unsigned long long int) (!(((/* implicit */_Bool) 1629355958U))))));
                        arr_38 [i_0] [i_1] [(short)4] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3004579083U)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)-126))))), (((18446744073709551615ULL) << (((((/* implicit */int) (unsigned short)58769)) - (58757)))))))) ? (min(((+(1140997981970878647ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (signed char)51)), (var_1))))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)7733)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (var_3))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 3220393027U)) ? (arr_14 [(unsigned char)1] [i_0] [(signed char)4] [i_0] [(unsigned char)1] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))))) : (((((/* implicit */unsigned int) 2067596709)) & (4U))))))))));
                    arr_39 [i_0] [i_0] [i_2] [(signed char)5] = ((/* implicit */unsigned char) ((long long int) ((unsigned int) ((unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) -2448368039175203333LL);
}
