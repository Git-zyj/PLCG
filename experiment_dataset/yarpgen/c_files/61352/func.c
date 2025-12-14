/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61352
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 885131229)) ? (((/* implicit */int) (_Bool)1)) : (113746194)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (unsigned char)114)))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)29021))))), (((((/* implicit */_Bool) -3374749513369003902LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1661070601U)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((short) (short)-1))))) ? (((-1878757137) / (((((/* implicit */int) (unsigned short)52640)) << (((((/* implicit */int) (short)-18203)) + (18209))))))) : ((~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)0))))))))))));
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) var_15)))))));
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((unsigned char) var_13));
            }
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_10)), (var_15)))), (max((((/* implicit */unsigned long long int) (short)9220)), (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54050)))))))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)164))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))))))));
            }
            /* LoopSeq 4 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1)) && (((/* implicit */_Bool) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) 1U)) ? (arr_4 [i_2]) : (((/* implicit */int) (short)29021))))))))))));
                var_23 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1 - 1])))), ((+(((/* implicit */int) arr_2 [i_1 - 1]))))));
            }
            for (short i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 16465257922151772779ULL))))), (-584685023)))) ? (max((((/* implicit */int) (_Bool)1)), (((int) (_Bool)1)))) : (((/* implicit */int) var_1))));
                    var_25 = ((/* implicit */_Bool) max((var_25), ((!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) / (((/* implicit */int) var_10)))))))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_24 [i_6] [i_6] [i_6] [i_1] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-22185)) : (arr_1 [i_1]))), ((+(((/* implicit */int) var_2)))))) + (((/* implicit */int) ((min((-1878757137), (((/* implicit */int) var_8)))) <= (((/* implicit */int) max((((/* implicit */unsigned short) (short)-13458)), (arr_3 [i_1] [i_1])))))))));
                    arr_25 [i_6] = ((/* implicit */unsigned int) (+(arr_8 [i_1])));
                }
                var_26 += ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (0)))))));
                arr_26 [i_1] [i_1] [i_6] = ((/* implicit */signed char) max((((/* implicit */int) ((short) var_13))), (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) (_Bool)1))))) ? (arr_4 [i_1 + 1]) : (((/* implicit */int) var_5))))));
            }
            for (unsigned long long int i_9 = 1; i_9 < 23; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (4434405342355218010ULL)));
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)82))))) || (((/* implicit */_Bool) ((unsigned long long int) var_12))))))) : (((((/* implicit */_Bool) -818621076)) ? (((/* implicit */unsigned long long int) 0)) : (var_0))))))));
            }
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (short i_13 = 3; i_13 < 23; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        {
                            var_30 = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_40 [i_13] [i_13] [i_12] [i_13] [i_13 - 2])) : (((/* implicit */int) var_4)));
                            var_31 += ((/* implicit */short) arr_27 [i_2] [i_2] [i_13]);
                            var_32 -= ((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_29 [i_2] [i_12 + 1]))))) * ((~(((/* implicit */int) var_7)))));
                            var_33 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_7))))));
                            var_34 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_1))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_7 [i_1] [i_12] [i_12])) * ((~(0ULL))))))));
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_7)))))));
                /* LoopNest 2 */
                for (short i_15 = 1; i_15 < 23; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        {
                            var_37 -= ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? ((+(3198823702U))) : (((((/* implicit */_Bool) var_12)) ? (3523026014U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) arr_45 [i_1] [i_2] [i_12] [i_1] [i_2]))));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_2] [i_12] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)));
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */unsigned int) (~(min((var_3), (min((((/* implicit */int) (signed char)127)), (-2121133685)))))));
            arr_49 [i_2] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((arr_39 [i_1]) - (1187510379)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned int) 2121133678)) / (arr_41 [i_1 - 1] [i_2] [i_1 - 1] [i_2] [i_1])))))));
        }
        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (_Bool)1))));
        var_42 = ((/* implicit */unsigned long long int) ((unsigned char) arr_4 [i_1]));
        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)235))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_1] [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */int) (short)-12985)) : (((/* implicit */int) var_2))))) : (((unsigned long long int) 818621075)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) ((short) -2144587974))))))))))));
    }
    var_44 *= ((/* implicit */unsigned long long int) var_2);
}
