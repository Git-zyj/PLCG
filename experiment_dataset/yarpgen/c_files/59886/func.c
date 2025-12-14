/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59886
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
    var_10 += ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_11 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (arr_5 [i_0] [i_1] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10733)))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54803)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))), (max((((arr_6 [i_3] [i_1] [i_3]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))));
                            arr_14 [i_0] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((signed char) (unsigned short)52698)), (arr_3 [i_3]))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                var_12 = ((/* implicit */long long int) ((max(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_5])))) | ((+(((/* implicit */int) (unsigned short)10733))))));
                arr_18 [i_5] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_10 [i_5] [i_1] [i_5] [i_0] [i_1])) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) arr_17 [i_0] [i_1] [i_5] [i_5]))))))));
            }
            for (short i_6 = 2; i_6 < 14; i_6 += 1) 
            {
                arr_22 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */short) (_Bool)1)), ((short)19508))), (arr_17 [i_1] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) 1141858311)))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_1])), (var_3))))))) ? (arr_1 [i_1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_14 *= ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)54802)), (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-18085)) : (var_2))), (((((/* implicit */_Bool) arr_19 [i_6] [i_1] [i_0])) ? (((/* implicit */int) var_1)) : (var_2)))))));
                arr_23 [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_6] [i_1] [i_0]);
            }
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (int i_8 = 1; i_8 < 12; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            arr_32 [i_0] [i_0] [i_7] [i_8] [i_9] |= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            var_15 += ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
            } 
            var_16 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_0)))));
        }
        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            arr_35 [i_10] [i_0] = ((/* implicit */signed char) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_10] [i_0]))))))), (((/* implicit */int) ((unsigned short) ((signed char) var_2))))));
            arr_36 [i_0] = ((/* implicit */short) ((unsigned short) arr_19 [i_0] [i_10] [i_10]));
            arr_37 [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_10] [i_10] [i_0] [i_0]))))) ? ((+(arr_4 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1])))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)6765)))))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_0))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_0] [i_10] [i_11] [i_10]) : (((long long int) var_9))))));
                        var_19 = ((/* implicit */_Bool) max((((long long int) var_9)), (max((min((var_4), (arr_16 [i_0] [(_Bool)1] [i_11] [i_11]))), (((long long int) (unsigned short)0))))));
                    }
                } 
            } 
        }
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            arr_46 [i_0] [i_13] = ((/* implicit */long long int) var_1);
            var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_3 [i_13])))));
            arr_47 [i_13] [i_0] |= ((/* implicit */int) (unsigned short)43196);
            arr_48 [i_0] [i_13] = ((/* implicit */signed char) var_7);
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((arr_4 [i_0]) - (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_40 [i_14])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_14])) : (((/* implicit */int) (unsigned short)32767))))))))))));
            arr_53 [i_0] [i_0] [i_14] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((signed char) (unsigned short)730)))))));
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                for (long long int i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    {
                        arr_58 [i_15] [i_16] [i_0] [i_15] [i_16] [i_0] |= ((/* implicit */_Bool) max((arr_10 [i_0] [i_14] [i_0] [i_16] [i_16]), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) == ((+(((/* implicit */int) (_Bool)1)))))))));
                        var_22 -= ((/* implicit */signed char) ((_Bool) 669973696351264423LL));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max(((~((~(((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) var_8)))))));
                        arr_59 [i_15] [i_14] [i_16] [i_16] [i_14] [i_15] |= ((/* implicit */short) max((((/* implicit */unsigned short) (short)-3910)), (arr_33 [i_0] [i_0])));
                        arr_60 [i_0] [i_15] [i_15] [12LL] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((int) arr_15 [i_0] [i_14] [i_15] [i_14]))))) && ((!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))));
                    }
                } 
            } 
        }
        arr_61 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((int) (short)32767))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_21 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_0))))));
        /* LoopSeq 4 */
        for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            var_24 = ((/* implicit */long long int) var_0);
            arr_64 [i_17] [i_17] [i_17] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_17] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_2))))))) : (((/* implicit */int) ((_Bool) (-(arr_31 [i_0] [i_17] [i_17] [i_0] [(short)0])))))));
            var_25 |= ((/* implicit */unsigned short) (signed char)-4);
            var_26 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (short)-1975)), (min((var_5), (((/* implicit */long long int) arr_44 [i_17] [i_0])))))), (((/* implicit */long long int) var_0))));
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                for (unsigned short i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    {
                        var_27 &= ((/* implicit */unsigned short) arr_41 [i_17] [i_18] [i_17]);
                        arr_69 [i_0] [i_0] [i_18] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) max(((short)-3910), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((_Bool) 1141858311)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (_Bool)1))))))) : ((~(((long long int) arr_42 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_70 [i_18] [i_18] [i_18] [i_0] [i_17] [i_0] |= arr_21 [i_0] [i_0] [i_19];
                        var_28 -= ((long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))));
                    }
                } 
            } 
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            arr_75 [i_0] [i_20] [i_20] = (-(min((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_0] [i_0] [i_0])))), (144106391982833664LL))));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (!((_Bool)1))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) 
            {
                var_30 -= ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_20] [(unsigned short)9] [i_0]);
                var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)28030)) ? (((/* implicit */int) (short)3899)) : (((/* implicit */int) (short)-32756))));
                arr_79 [i_0] [i_20] [i_21] [12LL] = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+((~(arr_67 [i_0] [i_20] [i_0] [i_21]))))))));
                var_33 -= ((/* implicit */unsigned short) var_5);
            }
        }
        /* vectorizable */
        for (short i_22 = 1; i_22 < 12; i_22 += 3) 
        {
            var_34 = ((/* implicit */unsigned short) (short)32763);
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)5)))))));
            /* LoopSeq 1 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                var_36 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_43 [i_0] [(unsigned short)1]))));
                var_37 |= (-((-(((/* implicit */int) var_1)))));
                var_38 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
            }
            arr_85 [i_22] = ((/* implicit */short) var_3);
        }
        /* vectorizable */
        for (signed char i_24 = 0; i_24 < 16; i_24 += 3) 
        {
            arr_88 [i_0] [i_0] [i_24] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_72 [i_0] [i_0]))));
            arr_89 [7LL] [(_Bool)1] [i_0] = ((/* implicit */signed char) arr_24 [i_24] [i_24] [i_24] [i_24]);
            var_39 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-3894)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        }
    }
}
