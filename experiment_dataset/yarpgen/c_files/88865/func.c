/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88865
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
    var_10 = ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_11 &= max((max((((/* implicit */unsigned int) (unsigned char)134)), ((~(arr_3 [i_0] [i_0]))))), (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_5)))), (min((arr_11 [i_0] [i_0] [i_4] [i_0] [i_4] [i_0]), (-113197850)))))));
                            var_12 = ((/* implicit */int) var_5);
                        }
                    } 
                } 
            } 
            var_13 += ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1)))) ? ((+(arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_1])) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 18; i_5 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) ((int) var_2));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                var_15 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0])) % ((~(((/* implicit */int) var_3))))));
                arr_20 [i_5] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_5])) - (((/* implicit */int) arr_19 [i_5]))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56))))))))));
                arr_21 [i_5] [i_5] = ((/* implicit */int) ((_Bool) ((unsigned int) var_2)));
            }
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            arr_25 [i_0] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
            /* LoopSeq 4 */
            for (unsigned short i_8 = 2; i_8 < 18; i_8 += 3) 
            {
                arr_30 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 4744329585365288073LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_14 [i_7] [i_8 - 2] [i_8] [i_8] [i_0] [i_0] [i_0]));
                var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (77832198291890311LL))) : (((long long int) var_5))));
                arr_31 [i_0] [i_7] [i_7] = ((/* implicit */long long int) arr_9 [i_8 - 2] [i_7] [i_8] [i_8]);
            }
            for (long long int i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
            {
                var_19 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_1))));
                arr_34 [i_0] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 299434260U)) ? ((+(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
                arr_35 [i_7] [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
            }
            for (long long int i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
            {
                arr_39 [18LL] [3U] [i_10] [i_7] = ((/* implicit */_Bool) var_0);
                var_21 = ((/* implicit */long long int) var_5);
                arr_40 [i_0] [i_7] [i_10] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) & (77832198291890311LL)))) ? (((/* implicit */int) (unsigned char)225)) : (65532)));
            }
            for (long long int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    var_22 = ((/* implicit */unsigned char) arr_41 [i_0] [i_7] [i_11]);
                    arr_46 [(unsigned char)17] [i_7] [i_7] = arr_3 [i_0] [i_7];
                }
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    arr_51 [i_0] [(unsigned char)17] [(unsigned char)17] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 2758941510776995597LL)) ? (arr_33 [i_11]) : (arr_27 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))));
                    var_23 ^= ((/* implicit */long long int) (~(113197850)));
                    arr_52 [i_13] [i_13] [i_11] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_0)));
                }
                var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0]))));
            }
        }
        var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)232)))) && (((/* implicit */_Bool) ((unsigned short) var_4)))));
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (-113197875) : (((/* implicit */int) var_2))))))), ((-(var_6)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_16 = 2; i_16 < 16; i_16 += 3) 
                {
                    var_27 = arr_37 [i_16 + 3];
                    var_28 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) -113197875))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_14] [i_14] [i_15]))) : (var_9))))));
                }
            }
            arr_60 [i_14] [i_0] [17LL] = ((/* implicit */unsigned int) 9223372036854775807LL);
        }
    }
    /* vectorizable */
    for (unsigned char i_17 = 4; i_17 < 18; i_17 += 4) 
    {
        var_29 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) 1284509867))))));
        arr_65 [i_17] [i_17] = ((/* implicit */signed char) ((unsigned char) arr_64 [i_17]));
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) min((((/* implicit */int) ((arr_66 [22LL] [22LL]) <= (((/* implicit */int) var_3))))), (min((arr_66 [i_18 - 1] [(unsigned short)4]), (((/* implicit */int) (unsigned char)185)))))))));
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((max((min((arr_66 [i_18] [i_18]), (((/* implicit */int) var_7)))), (((/* implicit */int) arr_67 [i_18 - 1] [i_18 - 1])))) * (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */int) var_7)) >> (((arr_66 [i_18] [i_18 - 1]) - (672672395))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)222)) || (((/* implicit */_Bool) (signed char)4))))))))))));
    }
    var_32 = ((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned char)0), ((unsigned char)41))))));
    var_33 = ((((/* implicit */_Bool) var_9)) ? ((-(((var_9) - (-54502775938234203LL))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_1))))));
    var_34 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */int) var_3)) > (-65532)))), (((var_6) & (((/* implicit */long long int) 1580207289U)))))), (var_6)));
}
