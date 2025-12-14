/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70851
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551610ULL)))))));
                    arr_8 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((signed char) (-(((/* implicit */int) (unsigned char)0))))), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_3 [0LL] [0LL]))))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_19 [i_0] [i_6]) / (var_13)))))) - (max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) -7)) == (var_11)))), (arr_17 [i_6] [i_6] [i_6] [(signed char)4]))))))));
                            arr_22 [i_6] [i_0] [i_5] [i_4] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */_Bool) arr_18 [i_0] [i_3] [i_4] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_3] [i_0] [i_5])) : (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) var_10)))));
                            arr_23 [i_0 + 1] [i_0] [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned char) (~(min((arr_2 [i_3 - 1]), (((/* implicit */long long int) arr_7 [i_3 - 1] [i_0]))))));
                        }
                        var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0 + 1] [i_4] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_3] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_20 [i_0 + 1] [i_0] [i_4] [i_5] [i_3]))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (((unsigned short) -1594971822513333517LL))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 3ULL)))))));
                        var_23 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [(unsigned short)2]))))) & ((-(18296898940314284700ULL)))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 549755813886LL)) ? (((arr_1 [16ULL]) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0 + 1] [14ULL] [20ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)180))))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */_Bool) ((signed char) ((arr_26 [i_7]) ? (var_14) : (2633064307133497753LL))));
        var_25 *= ((/* implicit */unsigned int) max((min((((long long int) var_13)), (((/* implicit */long long int) ((unsigned short) arr_25 [i_7] [i_7]))))), (((/* implicit */long long int) (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_26 [i_7]))))))))));
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (short i_10 = 2; i_10 < 23; i_10 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3146341292U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) : (18446744073709551610ULL)));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (unsigned char)192))));
                        arr_37 [i_9] [(_Bool)1] [i_10] [i_10 + 1] &= ((/* implicit */short) arr_25 [i_9] [(_Bool)1]);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (int i_11 = 1; i_11 < 11; i_11 += 4) 
    {
        arr_40 [i_11] = ((/* implicit */long long int) ((7ULL) % (5994722561199800276ULL)));
        var_28 *= ((/* implicit */_Bool) var_1);
        var_29 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6ULL)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (7ULL)))) ? (min((-6LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), (arr_36 [(signed char)14] [(signed char)14] [i_11] [i_11 + 1] [i_11]))))))));
        /* LoopNest 2 */
        for (unsigned int i_12 = 3; i_12 < 11; i_12 += 3) 
        {
            for (short i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                {
                    var_30 *= (!(((/* implicit */_Bool) (unsigned char)9)));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) ((-4051475136133478765LL) > (((/* implicit */long long int) ((/* implicit */int) var_17))))))))) <= ((+(arr_29 [i_11 + 1] [i_12 - 3] [i_12 - 3]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_11 + 1] [i_12 - 2] [i_14 + 1] [i_11 + 1]))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_30 [i_12 - 1] [i_12 - 1])), (var_7)))), ((+(-1594971822513333489LL))))))))));
                        arr_49 [i_11] [i_12] [i_13] [i_14] [i_11] [i_13] = ((/* implicit */unsigned short) min((-4770229893521601LL), (min((arr_2 [i_11]), (((/* implicit */long long int) var_12))))));
                        arr_50 [i_11] [i_11 - 1] [i_12] [i_12 - 1] [(_Bool)1] [i_14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (((var_8) ? (((/* implicit */unsigned long long int) -2LL)) : (18446744073709551594ULL)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-22086))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22097))) : (0U)))) & (max((7ULL), (((/* implicit */unsigned long long int) var_10))))))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            arr_57 [i_15] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -546843805888706369LL)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_15] [i_15] [i_15] [i_15])))))))), (((/* implicit */int) (unsigned short)62647))));
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (~(((/* implicit */int) (short)-27920)))))));
            var_34 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
        }
        for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 4) 
        {
            arr_61 [i_17 + 3] = ((/* implicit */long long int) arr_28 [i_15]);
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (~(var_13))))));
            var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_17])) ? (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_8))))))) : (var_11)));
            arr_62 [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1594971822513333517LL)) ? (-4895115606317042741LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_37 *= ((_Bool) (-(((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_28 [i_17])))))));
        }
        arr_63 [i_15] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_5))))) == ((-(arr_54 [i_15])))));
        /* LoopSeq 2 */
        for (unsigned char i_18 = 1; i_18 < 16; i_18 += 1) /* same iter space */
        {
            var_38 -= ((/* implicit */signed char) arr_65 [i_15] [i_15]);
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */unsigned long long int) min((arr_65 [i_15 - 1] [i_15 - 1]), (arr_65 [i_15 - 1] [i_15 - 1])))) : (((((/* implicit */_Bool) min((arr_18 [i_15] [i_15] [i_15] [(unsigned short)20]), (((/* implicit */unsigned char) var_17))))) ? ((-(18446744073709551610ULL))) : (((/* implicit */unsigned long long int) arr_11 [0LL] [i_18 + 2]))))))));
        }
        for (unsigned char i_19 = 1; i_19 < 16; i_19 += 1) /* same iter space */
        {
            var_40 ^= ((/* implicit */_Bool) min((((((/* implicit */int) var_7)) + (((/* implicit */int) var_5)))), ((-(((/* implicit */int) ((signed char) arr_9 [i_15] [i_15 - 1])))))));
            arr_70 [i_19] [i_19] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (signed char)-1)), (18446744073709551593ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_52 [i_15] [i_19])))))));
            arr_71 [i_15] [i_19] = ((/* implicit */_Bool) ((long long int) 19ULL));
            var_41 += ((/* implicit */unsigned int) ((long long int) 3763964349U));
        }
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        arr_75 [2U] |= ((/* implicit */_Bool) (unsigned char)59);
        /* LoopSeq 1 */
        for (unsigned short i_21 = 4; i_21 < 21; i_21 += 3) 
        {
            var_42 = var_5;
            var_43 = ((/* implicit */unsigned long long int) max((var_43), ((+(min((7ULL), (((/* implicit */unsigned long long int) arr_11 [18LL] [18LL]))))))));
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)55939)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7135))))) ? (((/* implicit */int) ((unsigned short) arr_14 [i_20] [i_20] [i_21]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_78 [i_20])))))) : (min((((/* implicit */int) ((signed char) arr_1 [(signed char)0]))), (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)0)))))))))));
            var_45 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))) ? ((+(arr_14 [i_20] [i_21 - 3] [i_21 - 3]))) : ((-(((/* implicit */int) arr_79 [i_21 - 2] [0ULL]))))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((unsigned short) arr_36 [i_20] [i_21 - 3] [i_21 - 3] [i_21 - 3] [i_21])))));
            /* LoopNest 2 */
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                for (long long int i_23 = 0; i_23 < 23; i_23 += 3) 
                {
                    {
                        arr_86 [i_20] [i_20] [i_20] [i_22 - 1] [i_23] = (_Bool)0;
                        var_46 = ((/* implicit */unsigned char) ((_Bool) arr_82 [i_21] [i_21] [i_22]));
                    }
                } 
            } 
        }
        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_15))))))) ? ((~(((((/* implicit */int) arr_31 [14LL])) ^ (((/* implicit */int) arr_15 [i_20] [i_20] [i_20] [i_20])))))) : ((~(((/* implicit */int) (unsigned char)142))))));
        var_48 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((var_13), (((unsigned long long int) arr_3 [i_20] [i_20]))))));
    }
}
