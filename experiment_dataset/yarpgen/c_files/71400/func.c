/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71400
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
    var_20 = var_18;
    var_21 &= ((((/* implicit */_Bool) 8349276418973628557ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3976832006U)) ? (((/* implicit */int) (short)-26022)) : (((/* implicit */int) (_Bool)0))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (14186888008983701883ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39217)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46)))))))) : (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-415))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4))) == (((/* implicit */long long int) ((int) var_5)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */int) var_15)) - (((/* implicit */int) (_Bool)1)))) > (((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 4; i_4 < 18; i_4 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21291)) ? (var_19) : (((/* implicit */unsigned long long int) ((long long int) var_7))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)47748)) - (47741)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_14))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)28092)) : (((/* implicit */int) (unsigned short)28737)))))));
                            var_25 &= (-(((((/* implicit */_Bool) 2701757394U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0)))));
                        }
                        for (unsigned short i_5 = 4; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) var_19);
                            var_27 = ((/* implicit */signed char) (~(((unsigned long long int) (unsigned char)7))));
                        }
                        for (unsigned short i_6 = 4; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 2969500263594899977ULL)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (_Bool)0)))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) (unsigned short)52595)) ? (9020678296233855944LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        }
                        for (unsigned short i_7 = 4; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            arr_24 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_7] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_2)) > (((/* implicit */int) (_Bool)1)))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)512))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40494)))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((15477243810114651665ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) var_4))));
                            arr_25 [i_7] [i_3] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)20306)) : (((/* implicit */int) (unsigned short)127))))) ? (((long long int) (signed char)110)) : (((((/* implicit */_Bool) -1877512746)) ? (4194534961728505563LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                            var_32 = ((/* implicit */_Bool) (+(var_7)));
                        }
                        arr_26 [i_0] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned short)12940)) : (((/* implicit */int) (_Bool)0))))) ? (((unsigned int) 13434012424116947250ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3636599430U)))))));
                        arr_27 [i_0] [i_1 - 2] [i_1] [i_2 + 1] [i_2 + 1] = ((/* implicit */_Bool) 5768838008221612575LL);
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) var_12))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (short i_10 = 2; i_10 < 17; i_10 += 2) 
            {
                for (unsigned int i_11 = 2; i_11 < 17; i_11 += 1) 
                {
                    for (unsigned int i_12 = 2; i_12 < 16; i_12 += 3) 
                    {
                        {
                            arr_43 [i_8] [i_9] [i_8] [i_11 - 1] [i_11] [i_12] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)525))));
                            var_34 += ((/* implicit */long long int) ((((((/* implicit */_Bool) 1482356127)) && (((/* implicit */_Bool) (short)17081)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1044963265)))) : (((unsigned long long int) var_3))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)534)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) : ((+(var_7)))));
            arr_44 [i_8] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)74))))) ? (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11990093564865200012ULL))) : (((18446744073709551600ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
            {
                arr_47 [i_8] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)85))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_5))))));
                var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_19))) ? (((((/* implicit */_Bool) 1222378965U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-89)))) : (((/* implicit */int) ((_Bool) (-2147483647 - 1))))));
                var_37 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) < (((((/* implicit */_Bool) 1482356127)) ? (var_4) : (var_4)))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    for (long long int i_15 = 2; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) ((unsigned int) var_4));
                            var_39 = ((/* implicit */unsigned int) (unsigned short)39551);
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_3)) ? (-3494619607433736714LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) (unsigned short)34975)) ? (((/* implicit */long long int) 0U)) : (9223372036854775807LL)))));
                            var_41 = ((/* implicit */short) ((((((/* implicit */_Bool) 70368744177664ULL)) ? (-7211731021467592236LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (506767532) : (-1575177799))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
            {
                arr_54 [i_8] [i_8] [i_9] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (unsigned short)56233))))) ? (((((/* implicit */_Bool) (unsigned short)56233)) ? (1048576) : (((/* implicit */int) (short)-19562)))) : (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5))))));
                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 506767532)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12941))) : (1830738188U)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)(-32767 - 1))))) : ((~(((/* implicit */int) (signed char)-25))))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)114)) && (((/* implicit */_Bool) (unsigned short)12939))))) > (((/* implicit */int) (short)-1005))));
                            arr_60 [i_18] [i_18] = (+(((/* implicit */int) (signed char)-6)));
                        }
                    } 
                } 
            }
        }
        arr_61 [i_8] [i_8] = ((/* implicit */_Bool) 1220986431U);
        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) (unsigned char)216))));
    }
}
