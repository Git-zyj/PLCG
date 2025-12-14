/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87993
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((-1048514263) + (((/* implicit */int) (unsigned short)57027))))) ? (((/* implicit */int) max(((unsigned short)8510), (((/* implicit */unsigned short) arr_1 [i_0 - 2]))))) : ((~(((/* implicit */int) arr_1 [i_0 - 2]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((unsigned short) (short)32767));
                            arr_14 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)10106)) == (((/* implicit */int) (unsigned char)22))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 3; i_5 < 24; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) ((_Bool) min(((unsigned short)2548), (((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_3] [i_5 - 1]))))))));
                            var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) max(((unsigned short)14154), (((/* implicit */unsigned short) (short)-32752))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57027))) : (3926409838U)))));
                        }
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 268435456)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -1554677680)))), (((/* implicit */long long int) ((unsigned char) (unsigned char)243)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_6] [i_3] [i_6] [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63007))) : (-5981290382016436343LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1676192598)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))) : (9223372036854775807LL))))))) : ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (-1676192595))))))));
                            var_23 = ((/* implicit */unsigned short) (short)-9100);
                            arr_19 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 9223372036854775794LL))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [(short)8] [i_1] [i_1])) ? (2147483645) : (((/* implicit */int) var_4))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_24 = ((((/* implicit */_Bool) arr_17 [i_0 - 2])) ? (((/* implicit */int) ((unsigned char) -648696974))) : (((int) var_6)));
                            var_25 = ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_16 [i_0 + 2] [i_0] [i_0 - 1] [i_3] [i_2])) : (((/* implicit */int) arr_16 [i_0 + 2] [i_0] [i_0] [i_3] [i_0])));
                            var_26 = ((/* implicit */unsigned char) (+(4611686018293170176ULL)));
                        }
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            arr_25 [i_0] [i_0] [13U] [i_3] [i_3] [i_8] [i_8] = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) 18446744073709551611ULL)) ? (arr_9 [i_8] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16829))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) -1547503994)), (3638440492992392904LL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20352))))) : (min((((/* implicit */unsigned int) -648696974)), (var_10)))))));
                            arr_26 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_0 - 1] [i_2] [i_3] [i_8] [i_0]))))) != (((/* implicit */int) (((-(((/* implicit */int) (short)32767)))) == (((/* implicit */int) var_4)))))));
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_20 [i_3] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 2])) + (arr_4 [i_0 - 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (1796394951U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) < (4294967295U))))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35095))))))))));
                        var_28 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) (short)-18282))))), (((((/* implicit */_Bool) 15773895113766299917ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) : (1577306246450690159ULL)))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((1577306246450690177ULL), (((/* implicit */unsigned long long int) (unsigned char)216)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [(unsigned char)19] [i_2] [i_2] [i_9])))))))) ? ((-((+(((/* implicit */int) var_17)))))) : (((/* implicit */int) var_17))));
                        var_30 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)178))))) ? (((arr_9 [i_0] [i_1] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-9793)))))))));
                    }
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned int) max((arr_24 [i_2] [i_1] [i_0]), (-291982091)))), ((-(arr_4 [i_1]))))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)26606)), (arr_22 [i_0] [i_0 - 1] [(unsigned short)24] [i_2] [i_0 + 1])))) ? ((+(arr_22 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_0 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35370))) ^ (var_10)))), (((((/* implicit */_Bool) 16869437827258861469ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62987))) : (11479190557798575537ULL))))) != (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62987)) < (((/* implicit */int) (unsigned char)77))))), (max((((/* implicit */unsigned int) (_Bool)0)), (var_10))))))));
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)2541)), (var_1))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)190)), ((unsigned short)16749))))));
}
