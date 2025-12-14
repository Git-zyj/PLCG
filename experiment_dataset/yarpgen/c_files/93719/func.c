/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93719
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1 - 3] [i_0] [i_2] = max((((unsigned long long int) max((((/* implicit */unsigned long long int) 1341384337)), (arr_1 [17LL])))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)3)) | (1341384354)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_10 = max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) -1341384331)) : (176751229U)))) >= (((var_3) - (((/* implicit */long long int) var_2))))))), (((((/* implicit */_Bool) max(((unsigned short)128), (((/* implicit */unsigned short) var_1))))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_4] [i_2] [i_1 - 3] [i_0])), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) var_8))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_10 [i_1] [(signed char)19] [i_3] [i_4 + 3])) ? (0) : (((/* implicit */int) var_4)))) : (((1165796726) >> (((1165796726) - (1165796725)))))))) <= (max((((long long int) (unsigned char)192)), (((/* implicit */long long int) ((unsigned short) -1166657895)))))));
                                var_11 *= ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_2])) ? (var_7) : (arr_3 [(signed char)15] [i_1]))) > (max((7051290010109431628ULL), (18446744073709551593ULL)))))), (((((/* implicit */_Bool) max((arr_3 [i_2] [i_4]), (((/* implicit */unsigned long long int) -3695572490241259589LL))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)65535)))) : (((var_2) - (((/* implicit */int) arr_6 [i_0] [i_2] [i_4 - 1]))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)1463)))))));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((long long int) arr_9 [i_1 + 2] [(unsigned short)5])) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)19)))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) ((max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((signed char) 16002061051040982486ULL))))) % (max((((/* implicit */unsigned long long int) ((arr_1 [i_0]) != (arr_1 [19U])))), (max((((/* implicit */unsigned long long int) -1341384337)), (137438953471ULL)))))));
                    var_15 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) 2273671231688000571ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_12 [i_1 + 1]) : (var_0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_14 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((unsigned long long int) var_8)) : (((((/* implicit */_Bool) arr_10 [(unsigned char)10] [i_0] [i_1 - 1] [i_6])) ? (arr_3 [i_1] [(unsigned short)15]) : (14610813287421200680ULL)))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((short) var_3)), (((/* implicit */short) ((((/* implicit */int) (unsigned char)225)) != (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))) % (max((((/* implicit */int) ((((/* implicit */_Bool) 13470817071251384911ULL)) || (((/* implicit */_Bool) (unsigned short)0))))), (((((/* implicit */int) (short)6452)) - (((/* implicit */int) var_4))))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [i_6] [i_1 - 2])), (var_3)))) || (((/* implicit */_Bool) min(((unsigned short)1), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [5LL] [i_0] [i_0])))))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)98))) || (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 13470817071251384935ULL)))))))));
                }
                arr_20 [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned int) (unsigned char)17)), (((((/* implicit */_Bool) 16987460751964209625ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) : (1077756899U))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((short) (unsigned char)17))), (((int) 801492212)))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) max((1367592411U), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)15)), ((unsigned short)13236))))))) ? (min((min((var_7), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((arr_14 [0ULL]), (((/* implicit */long long int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))))) : (((((/* implicit */_Bool) min((var_4), (var_6)))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_1 - 3] [i_1 + 2] [i_1 + 2] [15LL]), (((/* implicit */unsigned int) (unsigned short)17125))))) : (max((15222477680661575249ULL), (((/* implicit */unsigned long long int) (signed char)-5)))))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) >> (((((/* implicit */int) (unsigned short)50061)) - (50038)))))) ? (((/* implicit */int) ((arr_1 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2])) || (((/* implicit */_Bool) var_4)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3584)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-25347))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-6455)) : (var_2))) : (((((/* implicit */_Bool) arr_1 [(unsigned char)20])) ? (((/* implicit */int) (unsigned short)9786)) : (arr_18 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((signed char) 2427456648U))))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned long long int) var_1)), (var_7)))))));
}
