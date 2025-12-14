/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70459
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
    var_19 = ((/* implicit */unsigned short) (short)16861);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)9489)) : (((int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) max((((unsigned short) max((-1487902882), (((/* implicit */int) (unsigned short)35022))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_4))))))))));
        var_21 = ((/* implicit */int) ((unsigned int) 5616325913093989087LL));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 4; i_2 < 14; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) ((unsigned short) (short)-9885)))))))));
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (~(-5680960244964731836LL))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((unsigned long long int) var_3)) <= (((/* implicit */unsigned long long int) arr_4 [i_1])))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_17)))))) == (((/* implicit */int) ((short) min((var_14), (((/* implicit */unsigned int) arr_14 [i_4]))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        arr_27 [i_5] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [5ULL]))))))));
                        arr_28 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                    }
                } 
            } 
            arr_29 [i_5] [i_5] = ((/* implicit */short) min(((+(4449764054053151355ULL))), (max((max((((/* implicit */unsigned long long int) arr_20 [i_5] [i_5] [3ULL] [i_4])), (var_11))), (((/* implicit */unsigned long long int) ((arr_24 [i_4] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_18))))))));
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((long long int) ((long long int) (+(arr_15 [12ULL]))))))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 2; i_8 < 14; i_8 += 1) 
        {
            arr_32 [i_4] [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) (short)-9463));
            arr_33 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_20 [i_8 - 2] [i_4] [i_4] [i_8 - 1]))));
        }
        for (short i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            var_24 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44712)) ? (-1487902869) : (((/* implicit */int) (unsigned short)41556))))) ? (((/* implicit */int) (unsigned short)62444)) : (((/* implicit */int) ((unsigned short) 1487902895)))));
            var_25 = ((((/* implicit */_Bool) ((((arr_22 [i_4] [i_4] [i_9] [14]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_36 [i_4])) : (((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65532)) == (((/* implicit */int) (unsigned short)51338)))))))) : (((((/* implicit */_Bool) ((unsigned short) 8495092514943896843ULL))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))) : (var_1))));
            var_26 = ((/* implicit */unsigned char) arr_22 [i_4] [10ULL] [i_4] [i_9]);
        }
        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            var_27 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-1)), (((((/* implicit */int) (unsigned short)46030)) & (((/* implicit */int) (short)-3833))))));
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_43 [i_4] [(unsigned short)10] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 7319921490051166297LL)) ? (467016153096819909ULL) : (arr_10 [i_4] [i_4] [i_4] [i_4])));
                arr_44 [13ULL] [i_11] [i_10] [13ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)387)), (var_18))))));
                var_28 = ((/* implicit */short) var_14);
                arr_45 [i_4] [i_4] [i_4] = ((/* implicit */short) max(((+(((((/* implicit */_Bool) 805306368)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1020))) : (5616325913093989067LL))))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (var_9)))))))));
                arr_46 [14] [i_10] [7] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((var_3), (var_18)))) ? (((((/* implicit */_Bool) arr_36 [i_4])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3184909121U)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_18 [i_4])))))))));
            }
        }
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((arr_23 [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_9)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) min((var_16), (((/* implicit */unsigned long long int) arr_24 [i_4] [i_4])))))) : (max((((/* implicit */unsigned long long int) arr_42 [i_4] [i_4] [i_4] [i_4])), (arr_15 [i_4])))));
        /* LoopNest 3 */
        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            for (int i_13 = 2; i_13 < 13; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_14]))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((int) var_8)))))));
                        arr_54 [i_4] [i_4] [i_4] [i_4] [i_4] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))), (((unsigned int) (_Bool)1))))) <= (((unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_13] [(unsigned short)12])))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_15 = 2; i_15 < 13; i_15 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */long long int) (+(arr_55 [i_15] [14U])));
        var_32 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_15 + 4] [(unsigned short)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)13392)) == (((/* implicit */int) (_Bool)1)))))) : ((-(var_14)))));
        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
        arr_57 [i_15 + 1] = ((/* implicit */unsigned short) ((var_11) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17)))))));
    }
    /* vectorizable */
    for (long long int i_16 = 2; i_16 < 13; i_16 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */int) arr_55 [i_16 - 2] [i_16]);
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_59 [i_16]) ^ (((/* implicit */unsigned long long int) arr_56 [i_16] [(unsigned char)6]))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) arr_58 [i_16] [i_16]))))));
        var_36 += ((unsigned int) (!(((/* implicit */_Bool) -522667075))));
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_16])) ? (arr_55 [i_16 + 2] [9LL]) : (((/* implicit */unsigned long long int) var_18))))) ? ((-(arr_56 [i_16] [i_16]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (arr_59 [i_16])))))));
        arr_60 [i_16 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_16] [i_16 + 1])) ? (-5616325913093989076LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((unsigned short) arr_58 [10U] [i_16]))) : (((/* implicit */int) ((unsigned short) var_8)))));
    }
    var_38 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) ((_Bool) 2252919212U))) : (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) var_4)))))))));
}
