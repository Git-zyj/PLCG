/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90920
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_5))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) arr_5 [i_0] [i_1]));
            arr_8 [i_1] [i_0] = ((/* implicit */unsigned int) (+((+(var_1)))));
            var_16 ^= ((/* implicit */unsigned int) ((_Bool) arr_4 [i_0] [i_0] [i_0]));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4]));
                    arr_16 [i_0] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned char) (~(var_0)));
                    arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_11 [i_0] [i_2])))) ^ (((((/* implicit */int) (unsigned char)233)) % (((/* implicit */int) arr_3 [i_2] [9LL] [i_4]))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) == (arr_4 [i_0] [i_2] [i_3]))))));
                }
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_18 = ((/* implicit */signed char) ((-634509030649649809LL) & (((/* implicit */long long int) (~(11440725))))));
                    var_19 = ((/* implicit */unsigned char) arr_19 [i_2] [i_2] [i_5]);
                }
                for (short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                {
                    var_20 *= ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_2] [i_3] [i_6]))));
                    arr_22 [i_0] [i_0] [(signed char)22] [i_3] [i_6] [i_6] = ((/* implicit */long long int) ((var_13) | (((/* implicit */unsigned long long int) arr_13 [i_0] [i_2] [i_2] [i_6]))));
                    arr_23 [i_0] [i_2] [i_3] [i_6] |= ((unsigned char) ((int) arr_19 [i_0] [i_2] [i_2]));
                    var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */int) (unsigned short)15360)) - (((/* implicit */int) (unsigned char)161))))));
                    arr_24 [i_6] = ((signed char) arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_6]);
                }
                for (short i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(arr_27 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_28 [i_3] [i_7] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) var_12)));
                    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_2] [i_3]))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        arr_31 [i_0] [i_2] [i_3] [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) -7580550293427073394LL));
                        arr_32 [i_0] [i_2] [i_7] [i_8] = ((/* implicit */unsigned char) ((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + (arr_29 [i_0] [i_2] [i_2] [i_3] [i_7] [i_8])));
                    }
                }
                var_24 = ((/* implicit */long long int) ((_Bool) arr_21 [i_0]));
                arr_33 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) arr_19 [i_0] [i_2] [i_0]);
                arr_34 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_2] [i_3]))));
            }
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
            {
                arr_39 [i_9] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_2] [i_2] [i_9]))));
                arr_40 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((long long int) var_2)) < (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9] [i_2] [i_0])))));
            }
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)41700))))) : (arr_30 [i_2] [i_2] [i_0] [i_0] [i_0])));
        }
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    {
                        arr_49 [6U] [i_10] [i_11] [6U] = ((/* implicit */short) ((((/* implicit */int) arr_45 [(short)19] [i_10] [i_11])) >= ((+(1128594953)))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_4)))))))));
                        arr_50 [8LL] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_6 [i_13] [i_13])), (((unsigned short) ((unsigned short) var_14)))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((max((arr_0 [i_13] [i_13]), (((/* implicit */long long int) var_7)))) <= (-2710124666830458353LL)))) > (((int) arr_26 [21U] [i_13] [21U] [i_13] [i_13])))))));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                {
                    arr_57 [i_14] [i_14] [i_15] [i_13] = ((/* implicit */unsigned short) arr_10 [i_13] [i_15]);
                    var_29 -= ((/* implicit */unsigned char) ((((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((unsigned char) (signed char)-113)), (((/* implicit */unsigned char) arr_43 [i_15] [i_13])))))) : (max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_41 [i_13] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_13] [i_13] [i_13] [i_15]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 417441100431357271ULL)) ? (((/* implicit */int) arr_35 [i_13] [i_14] [i_15])) : (((/* implicit */int) (signed char)127)))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) ((var_0) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_37 [i_13] [i_13] [i_13])), (3076462468U))))));
    }
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
    {
        var_31 = ((/* implicit */int) arr_47 [i_16] [i_16] [i_16] [i_16]);
        /* LoopSeq 1 */
        for (signed char i_17 = 0; i_17 < 22; i_17 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) min((var_32), (((unsigned char) max((var_6), (((/* implicit */long long int) arr_4 [i_16] [i_17] [i_16])))))));
            arr_64 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (unsigned short)20045)))));
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((_Bool) max((arr_13 [i_16] [i_16] [i_17] [i_17]), (arr_13 [i_16] [i_17] [i_16] [i_16])))))));
        }
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            for (unsigned short i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) (((~(arr_18 [i_16] [i_18] [i_18] [i_19] [i_19] [i_19]))) & (arr_18 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])));
                    var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)4947)) && (((/* implicit */_Bool) (unsigned char)100)))) ? (((/* implicit */int) ((unsigned char) ((short) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (short)-14))))))));
                }
            } 
        } 
    }
    for (int i_20 = 0; i_20 < 21; i_20 += 1) 
    {
        var_36 = ((/* implicit */unsigned long long int) (((-(-9223372036854775801LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_20] [i_20] [i_20])))));
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(arr_62 [i_20] [i_20] [i_20])))))))));
        arr_72 [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_68 [i_20] [i_20])) && (((/* implicit */_Bool) (signed char)-50)))))) <= (((arr_68 [i_20] [i_20]) / (arr_68 [i_20] [i_20])))));
    }
}
