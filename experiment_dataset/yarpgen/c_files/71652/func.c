/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71652
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) (~(max((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) & (var_9)))))));
        var_16 -= ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (max((arr_0 [i_0] [i_0]), (((/* implicit */int) (signed char)-1)))) : ((~(((/* implicit */int) (signed char)-66)))));
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) (unsigned short)24400)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2074299676143756000ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2074299676143756000ULL)))) ? (511) : (((/* implicit */int) arr_2 [i_0] [12U]))));
            var_19 = ((/* implicit */unsigned char) 2074299676143755991ULL);
        }
        for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) min((arr_3 [i_2 + 1] [i_0]), (arr_3 [i_2] [i_0])))), (((((/* implicit */_Bool) arr_3 [9U] [i_2])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_2 + 1]))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 5475434179885243763LL))));
            var_21 = arr_1 [i_0];
            var_22 = ((/* implicit */int) (unsigned short)24414);
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) (unsigned short)1023)) : ((~(((/* implicit */int) (signed char)82))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)41136)))) : (((((/* implicit */_Bool) ((arr_6 [i_0]) + (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_14))))) : (max((var_9), (((/* implicit */long long int) var_14)))))));
        }
        var_24 = ((/* implicit */unsigned int) (~(min((((16372444397565795615ULL) / (1023358065180754318ULL))), (((/* implicit */unsigned long long int) (!(arr_5 [i_0]))))))));
    }
    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_1), (((/* implicit */unsigned int) arr_10 [i_3] [i_3])))) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (!(var_11)))) : (((((/* implicit */_Bool) var_0)) ? (arr_10 [i_3 + 3] [i_3 + 3]) : (((/* implicit */int) var_11))))));
        var_25 &= ((/* implicit */_Bool) (((_Bool)1) ? (4095LL) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)-1)), (-1543200422))))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned short) (unsigned short)24401))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) | (arr_10 [i_3 + 2] [i_3 + 2]))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-57))))) < (((((/* implicit */_Bool) 4225857147790599493LL)) ? (arr_9 [i_3]) : (arr_9 [i_3])))))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_20 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (~((~(var_10))))));
                    arr_21 [i_3] [i_3] [(signed char)15] = ((/* implicit */long long int) (((~(((/* implicit */int) var_4)))) == (((/* implicit */int) ((((/* implicit */int) arr_18 [10U] [i_3] [i_3])) < (((/* implicit */int) arr_18 [i_3] [i_3] [(unsigned char)11])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) arr_12 [i_3] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_23 [10LL] [i_6] [10LL] [10LL]))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_3 + 3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3 - 1] [i_3] [i_3 + 3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2]))) : (var_12)));
                        }
                        var_29 = ((/* implicit */unsigned int) (~(((var_11) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_5] [i_5] [i_3] [i_6]))))));
                        var_30 *= ((/* implicit */_Bool) (((!((_Bool)1))) ? (arr_13 [i_3 + 3] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_3 + 1] [i_5])))));
                        var_31 = ((/* implicit */unsigned int) var_10);
                    }
                    arr_26 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    var_32 = ((/* implicit */_Bool) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_16 [i_5] [i_3 + 3] [i_5])) : (((/* implicit */int) arr_16 [i_5] [i_3 + 3] [i_4]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10377)) ? (((/* implicit */int) arr_12 [i_5] [i_3 - 1] [i_5])) : (((/* implicit */int) (unsigned char)153)))))))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 17423386008528797298ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14332))) : (-273551843663111183LL))))) && (((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3 + 3]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        var_34 = ((short) (~(1176260574)));
        var_35 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    var_36 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 2047)) ^ (var_10))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) -24580376)) : (var_1)))))))));
    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_8))));
}
