/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6443
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
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_13)), (var_0))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) var_2);
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_21 &= ((/* implicit */short) min(((unsigned short)58824), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_17)))))));
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) min((6060119315477634103LL), (((/* implicit */long long int) (unsigned char)233))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 20; i_6 += 3) 
                    {
                        var_22 = var_0;
                        var_23 += ((/* implicit */unsigned short) (signed char)-115);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_2] [i_0] [i_2 + 1])) > (((/* implicit */int) (unsigned char)27))));
                        var_25 += ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2 + 2] [20LL] [i_2 - 2])) >= (((/* implicit */int) arr_17 [(short)22] [i_6] [i_6] [i_6 + 1] [i_6] [(short)22]))));
                    }
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), (var_6)))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)18027)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))) : (arr_9 [i_5 - 3] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_5))))))))));
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    arr_22 [i_0] [i_0] [(unsigned char)11] [i_0] = ((/* implicit */unsigned int) (unsigned char)218);
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_21 [i_0] [i_0]), (var_9)))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)229)) ? (-8311537301348983146LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28141)))))))))));
                    arr_24 [i_7] &= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)6] [i_7] [i_2 + 1]))) >= (arr_12 [i_1 + 1]))) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)56)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        arr_28 [i_0] [i_1 + 1] [i_2 - 2] [i_8] [i_1 + 1] &= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_8 [i_2 - 1] [i_8] [i_2 - 1])))) % (((/* implicit */int) var_13))));
                        var_27 *= ((/* implicit */unsigned int) ((short) ((arr_1 [i_8]) >= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_8]))))));
                    }
                    for (unsigned short i_9 = 4; i_9 < 21; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) (unsigned char)1);
                        arr_32 [(unsigned char)20] [i_1] [i_0] [i_7] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-25959))))))) ? ((-(((/* implicit */int) (short)-1597)))) : (((/* implicit */int) (signed char)-87))));
                        var_29 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)185));
                    }
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))), (((((/* implicit */_Bool) 3758096384U)) ? (((/* implicit */int) (short)10935)) : (((/* implicit */int) (unsigned char)70))))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) (unsigned char)156)))) && (((/* implicit */_Bool) (signed char)82)))) ? (((unsigned int) ((((/* implicit */int) var_17)) + (((/* implicit */int) (_Bool)1))))) : (var_15))))));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    arr_37 [i_0] [i_1] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)78)), (var_18)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_20 [i_2] [1U]))))));
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_4))));
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_11] [i_2] [i_1 - 1] [i_0]))))), (arr_25 [i_0] [i_2 - 1] [i_2] [i_1 + 1] [i_1] [i_11]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))));
                }
                for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    var_34 = ((/* implicit */signed char) ((int) ((unsigned short) (-(((/* implicit */int) (unsigned short)38197))))));
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min((min((max((((/* implicit */unsigned long long int) (short)10235)), (var_19))), (((/* implicit */unsigned long long int) arr_4 [i_12] [(unsigned short)4] [i_0])))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (1464164409815139446ULL))) & (((/* implicit */unsigned long long int) ((unsigned int) 8331724772504069886LL))))))))));
                    var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [i_2 - 2] [i_12])))));
                }
            }
            arr_41 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((var_1), (arr_6 [i_0] [i_1] [i_1] [i_1])))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57015)))))));
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    for (short i_15 = 3; i_15 < 23; i_15 += 1) 
                    {
                        {
                            arr_49 [i_0] [i_14] [i_13] [i_1 - 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_31 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) : (2417332693U)))))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_13] [i_14] [i_15 - 2]))) >= (arr_9 [i_15] [i_0] [i_13] [i_14] [i_15 - 3]))) && (((/* implicit */_Bool) var_14))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                            var_37 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_42 [i_0])) || (((/* implicit */_Bool) arr_42 [i_0]))))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 7056904065683568410LL)), (10192773931599259059ULL)));
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((var_5), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 916591304U)) ? (arr_6 [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33172))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_1) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-10734)), (arr_33 [i_0] [i_0] [i_0] [i_0] [i_1])))))))));
        }
        for (unsigned short i_16 = 2; i_16 < 22; i_16 += 3) 
        {
            var_40 ^= ((/* implicit */int) -7056904065683568410LL);
            var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518))) : (76835521U)));
        }
        var_42 = ((/* implicit */unsigned short) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
}
