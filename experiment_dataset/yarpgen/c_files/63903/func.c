/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63903
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
    var_16 = ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) -78578226))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)66)))))))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (8897587675366162276LL) : (8897587675366162288LL)))) ? (((/* implicit */int) (signed char)-5)) : (-78578226))));
                        arr_12 [i_0] [i_1] [i_0] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) -78578226)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(signed char)11] [i_1] [i_2] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (var_8))))))));
                        arr_13 [i_3] [i_0 + 2] [i_3] [i_0 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0 + 1])) ? (((/* implicit */int) ((signed char) (signed char)-13))) : (((/* implicit */int) min(((unsigned short)55925), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
                    }
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned char) (+(arr_9 [i_1 - 3] [i_1 - 3] [i_0 + 2])))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) (~((~(1974175412)))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_4 - 1]) : (arr_11 [i_4] [i_2] [i_1] [i_0] [i_0] [i_0]))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(4611686018427387903LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-70))))) : ((~(-8897587675366162302LL))))))));
                        arr_18 [i_0 + 2] [i_1] [i_1] [(unsigned char)10] [i_4] [i_1 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((-2107996834) & (((/* implicit */int) var_5))))), (4294967278U)))) ? (max((((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (-268435456) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_3 [i_4 - 2] [i_1 + 1])))) : ((((-(((/* implicit */int) arr_3 [i_0] [i_4 - 1])))) + (((/* implicit */int) max(((unsigned short)18362), (((/* implicit */unsigned short) arr_3 [i_0] [i_0])))))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (unsigned char)245))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [6LL] [i_1] [6LL]))) : (((4410616826248012990ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))))));
                    }
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_2]);
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) 4294967278U))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_5] [i_2] [i_2] [i_5] [(signed char)4] = ((long long int) max((((/* implicit */unsigned int) (_Bool)0)), (4U)));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [(unsigned short)1])) ? (((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 3]))) : (arr_6 [i_1 - 1] [i_0 + 1]))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1] [i_2] [i_5] [i_6 + 2]))))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) (~(-8897587675366162283LL))))))));
                            var_27 *= ((/* implicit */unsigned char) (~(((((/* implicit */int) ((unsigned short) (_Bool)0))) - (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)103))))))));
                            var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_5] [i_6]))))) ? (268435456) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15444)))))))) ? (((/* implicit */long long int) ((80793344) ^ (((int) var_10))))) : ((((_Bool)1) ? (3881431195331548229LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                        }
                    }
                }
            } 
        } 
    } 
}
